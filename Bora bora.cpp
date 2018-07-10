#include <iostream>
	#include <vector>
	#include <algorithm>

	using namespace std;

	struct carta{
		int valor,naipe;
	};

	int naipe(char c){		//converte os anipes em inteiros
		if(c=='C')
			return 0;
		if(c=='D')
			return 1;
		if(c=='H')
			return 2;
		if(c=='S')
			return 3;
	}

	int new_player(int player,int* flag,int p){		//diz qual eh o proximo a jogar
		if(flag[0]==1){			//arimetica modulo p
			return (player+1)%p;
		}
		if(player==0){				//esta implicita a condicao direction=-1. se o player atual for zero, o proximo eh o p-1
			//cout << "sentido ah" << endl;
			return p-1;
		}
		//cout << "sentido ah" << endl;
		return player-1;			//se o player nao for o zero, fica facil e eh so subtrair 1 (3->2, 2->1, etc)
	}

	int descarte_carta(vector<carta> &descarte, vector<vector<carta> > &hand, int player){

		int index_hand,index_d;
		carta topo_mao,topo_desc;

		topo_desc=descarte[descarte.size()-1];			//carta no topo da pilha de descarte
		topo_mao=hand[player][hand[player].size()-1];	//carta que esta no topo da mao

		if(topo_mao.valor == topo_desc.valor || topo_mao.naipe==topo_desc.naipe){
			descarte.push_back(topo_mao);
			hand[player].pop_back();
			//cout << "descartamos a carta" << topo_mao.valor << " " << topo_mao.naipe << endl;
			return topo_mao.valor;
		}

		return 0;	//se n descartou nada, diz q nao descartou

	}

	int descarte_mao(vector<carta> &descarte, vector<vector<carta> > &hand, int player){	//descarta a melhor carta possivel da mao
																//retorna 1 se deu pra descartar, ou 0 caso contrario
		int id_removida,i,size_d;
		vector<carta> joga_fora;		//eh o vetor que vai guardar os candidatos a carta que descartaremos //evito usar o erase
		size_d=descarte.size()-1;

		for(i=0;i<hand[player].size();i++){

			if(hand[player][i].valor == descarte[size_d].valor || hand[player][i].naipe==descarte[size_d].naipe){
			//se a carta for descartavel
				if(joga_fora.size()==0){	//se n tem nada na joga_fora ainda, eh pq qualquer coisa eh o descarte otimo
					joga_fora.push_back(hand[player][i]);
					id_removida=i;
				}

				else if(joga_fora[0].valor<hand[player][i].valor){
					joga_fora.pop_back();
					joga_fora.push_back(hand[player][i]);
					id_removida=i;
				}
				else if(joga_fora[0].valor==hand[player][i].valor && joga_fora[0].naipe<hand[player][i].naipe){
					joga_fora.pop_back();
					joga_fora.push_back(hand[player][i]);
					id_removida=i;
				}
			}	//terminamos de decidir sobre a carta atual
		}	//terminamos de ver toda as cartas elegiveis

		if(joga_fora.size()==0){
			//cout << "nada foi descartado" << endl;		//se nada foi descartado, retorna 0
			return 0;
		}

		//cout << "vamos remover a " << hand[player][id_removida].valor << " " << hand[player][id_removida].naipe << endl;


		descarte.push_back(joga_fora[0]);	//se tem oq descartar, tiro da mao e boto na pilha
		hand[player].erase(hand[player].begin()+id_removida);

		return joga_fora[0].valor;
	}

	void compra(vector<carta> &saque, vector<vector<carta> > &hand, int player,int* flag){		//faz a funcao de sacar da pilha um amount de cartas

		int i,size;

		size=saque.size()-1;

		for(i=0;i<flag[2];i++){
			if(size>=0){
				//cout << "compramos a carta " << saque[size].valor << " " << saque[size].naipe << endl;
				hand[player].push_back(saque[size]);	//coloca a carta no topo da pilha de saque na mao do jogador
				saque.pop_back();						//deleta a carta do topo da pilha de saque
				size--;
			}
		}
	}

	void penalize(vector<carta> &saque, vector<vector<carta> > &hand, int player, int card_id,int* flag){
		if(card_id==1){
			flag[2]=1;
			//cout << "tem as na pilha, saca e pula o turno" << endl;
			compra(saque,hand,player,flag);
			flag[2]=0; //reseta penalidades
		}
		if(card_id==7){
			flag[2]=2;
			//cout << "tem 7 na pilha, saca 2 e pula o turno" << endl;
			compra(saque,hand,player,flag);
			flag[2]=0;
		}
		if(card_id==11){
			//cout << "tem valete, passo a vez" << endl;
		}

	}

	void inverte_sentido(int* flag){
		flag[0]=flag[0]*(-1);
		flag[1]=0;
	}



	int jogo(vector<carta> &saque, vector<carta> &descarte, vector<vector<carta> > &hand,int p){

		int player;				//jogador atual e quantidade de cartas que devo sacar
		int i,carta_descartada,checa_descarte,topo_pilha;	//i=iterador, variavel que memoriza a ultima carta que foi descartada
		int size;		//var auxiliar pra evitar bug na hora de comprar carta
		int flag[3]; 	//flag[0]=sentido (1h,-1ah), flag[1]=se nesse turno paga ou nao penalidade
						// flag[2]= numero de cartas pra sacar

		carta aux;

		flag[0]=flag[1]=1;
		player=0;
		flag[2]=0;
		topo_pilha=descarte[descarte.size()-1].valor;


		while(true){

			//cout << "eh a vez do player " << player << endl;

			aux=descarte[descarte.size()-1];	//economia de olho. aux -> carta no topo da pilha de descarte
			topo_pilha=aux.valor;

			//cout << "a carta que esta no topo da pilha de descarte eh a " << aux.valor << " " << aux.naipe << endl;
			//cout << " a mao do player eh" << endl;

			for (i=0;i<hand[player].size();i++){
				//cout << hand[player][i].valor << "-" << hand[player][i].naipe << " " ;
			}

			//cout << endl;

			if(flag[1]==1){					//se eh a primeira pessoa a encontrar a carta penalizante na pilha
												//flag de penalidade esta cagando o programa, repense
				penalize(saque,hand,player,topo_pilha,flag);
				if(topo_pilha==1 || topo_pilha==7 || topo_pilha==11){
					flag[1]=0;
					player=new_player(player,flag,p);
					continue;
				}
				if(topo_pilha==12){		//cuida do caso que a primeira carta eh dama
					inverte_sentido(flag);
				}

			}

			carta_descartada=descarte_mao(descarte,hand,player);

			if(hand[player].size()==0){
				return player;
			}

			if(carta_descartada>0){	//trata do caso que ele descartou normalmente
				topo_pilha=carta_descartada;
				if(topo_pilha==1 || topo_pilha==7 || topo_pilha==11)
					flag[1]=1;
				if(topo_pilha==12)	//o efeito da dama eh imediato
					inverte_sentido(flag);
			}

			if(carta_descartada==0){
				flag[2]=1;
				size=hand[player].size();
				compra(saque,hand,player,flag);	//se nao conseguiu descartar antes tem q sacar uma
				flag[2]=0;

				if(hand[player].size()>size){ //soh vem nessa execucao se ele conseguiu comprar carta

					carta_descartada=descarte_carta(descarte,hand,player);	//tenta descartar a q ele comprou;
					if(carta_descartada>0){		//se ele conseguiu descartar
						topo_pilha=carta_descartada;	//e a comprada pode ser descartada
						if(topo_pilha==1 || topo_pilha==7 || topo_pilha==11)
							flag[1]=1;
						if(topo_pilha==12){
							inverte_sentido(flag);
						}
					}
				}
			}
			//cout << "fim de turno" << endl << endl;
			carta_descartada=-1;	//evita aplicar duas vezes a punicao em sequencia
			player=new_player(player,flag,p);
		}

	}

	int input(int p, int m, int n){			//funcao responsavel por criar

		int i,j;							//iteradores
		char aux;							//variavel auxiliar para colocar o valor numerico do naipe da carta
		carta element;						//elemento auxiliar para anexar as cartas às pilhas e maior carta descartavel, respectivamente

		vector<vector<carta> > hand;		//cada mao eh um elemento de hand, um vector de cartas
		hand.resize(p);

		for(i=0;i<p;i++){						//faz o input da mao de cada jogador. pega as cartas de indice 1 a p*m
			for(j=0;j<m;j++){					//portanto, ja usei p*m da n cartas (sobraram n-p*m)
				cin >> element.valor;
				cin >> aux;
				element.naipe=naipe(aux);
				hand[i].push_back(element);
			}
		}


		vector<carta> descarte;			//coloca a carta de index p*m+1 como o primeiro elemento da pilha de descarte
		cin >> element.valor;
		cin >> aux;						//a carta no ultimo indice eh a que esta em cima (soh dar push_back pra atualizar)
		element.naipe=naipe(aux);
		descarte.push_back(element); 	//usei mais uma, entao sobraram n-p*m-1


		vector<carta> saque;			//criei a pilha de saque. estou colocando as cartas de index  p*m+2 a n, entao tenho
		saque.resize(n-p*m-1);			//n-p*m-1 cartas (index p*m+2 ate n)

		for(i=0;i<n-p*m-1;i++){			//a primeira carta lida na pilha de saque eh a que esta em cima (maior index)
			cin >> element.valor;		//entao pra poder usar pop_back, eu coloco a primeira carta na ultima posicao
			cin >> aux;					//e vou descendo os indices
			element.naipe=naipe(aux);
			saque[n-p*m-2-i]=element;
		}

		//cout << "terminei de ler" << endl;

		return jogo(saque,descarte,hand,p);
	}

	int main(){

		int p,m,n; 	//numero de jogadores, cartas distribuidas a cada jogador e total de cartas, respectivamente

		p=m=n=1;

		while(p+m+n!=0){	//p,m,n>0, entao p=0,m=0,n=0 <=> p+m+n=0
			cin >> p >> m >> n;
			if(p+m+n!=0){
				cout << input(p,m,n) + 1 << endl;
			}
		}

		return 0;
	}
