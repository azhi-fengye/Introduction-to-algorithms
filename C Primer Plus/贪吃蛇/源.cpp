/*
****************************************
*      # 出于对原创作者成果的保护 #
*      # 以下代码已用混淆算法处理 #
*
* - 混淆代码和原始代码功能设计完全一致 -
* - 您能正常编译运行并测试程序全部功能 -
* - 也能从混淆代码中了解程序的大概做法 -
* - 若您需要原始代码请联系原创作者本人 -
*
****************************************
*/
#define J2A6 sprintf(line, "  %-18s%-18d%-18s", player->name, player->score, player->die ? "DIED" : "ALIVE");
#define J2A5 printf("  %-14d%-20s%-20d\n", index + 1, record->player, record->score);
#define J2A4 printf("╔--------------------------------------------------╗\n");
#define J2A3 printf("╚--------------------------------------------------╝\n");
#define J2A2 printf("  %-14s%-20s%-20s\n", "Index", "Player Name", "Score");
#define J2A1 sprintf(line, "  %-18s%-18s%-18s", "NAME", "SCORE", "STATUS");
#define J2A0 sprintf(format, "※%%-%ds※\n", (canvas->width - 2) * 2);
#define J29F printf("                『 Record Player 』\n");
#define J29E printf("                『 Ranking list 』\n");
#define J29D printf("                『 One Player 』\n");
#define J29C printf("                『 Pause Game 』\n");
#define J29B printf("                『 Snake Game 』\n");
#define J29A printf("                『 Two Player 』\n");
#define J299 printf("                『 Game Over 』\n");
#define J298 FILE* output = fopen("snake_record.db", "w");
#define J297 while ((c = getchar()) != '\n' && c != EOF);
#define J296 FILE* input = fopen("snake_record.db", "r");
#define J295 printf("Input error, please retype!\n");
#define J294 (pRecordList)malloc(sizeof(RecordList));
#define J293 printf("         4 > Record Player\n");
#define J292 info->canvas->data[point->y][point->x]
#define J291 printf("         3 > Ranking list\n");
#define J290 printf("         2 > Save & Exit\n");
#define J28F printf("         2 > Two Players\n");
#define J28E (info->canvas->data[food->y][food->x]
#define J28D system("mode con cols=80 lines=40");
#define J28C printf("    Please enter options:");
#define J28B printf("      Enter 0 and back.\n");
#define J28A printf("         1 > One Player\n");
#define J289 info->canvas->data[food->y][food->x]
#define J288 (pGameInfo)malloc(sizeof(GameInfo));
#define J287 printf("      Enter 0 and exit.\n");
#define J286 printf("         1 > Back Game\n");
#define J285 printf("         Player1 Name : ");
#define J284 printf("         Player2 Name : ");
#define J283 (KeyMessageCall)disposeKeyMessage);
#define J282 (pCanvas)malloc(sizeof(Canvas));
#define J281 (pPlayer)malloc(sizeof(Player));
#define J280 printf("  Input player name:");
#define J27F (canvas->data[food->y][food->x]
#define J27E printf("         0 > Quit\n");
#define J27D (pPoint)malloc(sizeof(Point));
#define J27C (pSnake)malloc(sizeof(Snake));
#define J27B printf("         0 > Exit\n");
#define J27A sprintf(buffer, format, "  ");
#define J279 destroyRecordList(pRecordList
#define J278 canvas->data[head.y][head.x];
#define J277 str[strlen(str) - 1] = '\0';
#define J276 canvas->data[tail.y][tail.x]
#define J275 increaseSnake(player->snake,
#define J274 destroyCanvas(info->canvas);
#define J273 destroySnake(player->snake);
#define J272 canvas->data[head.y][head.x]
#define J271 sizeof(canvas->data[0][0]));
#define J270 printf("         Name : ");
#define J26F memset(canvas->data[index],
#define J26E free(canvas->data[index]);
#define J26D loadRecordList(pRecordList
#define J26C showRecordList(pRecordList
#define J26B saveRecordList(pRecordList
#define J26A headSnake(player->snake);
#define J269 &list->data[list->len++];
#define J268 list->data[cursor].score)
#define J267 tailSnake(player->snake);
#define J266 sizeof(canvas->data[0]));
#define J265 destroyGameInfo(pGameInfo
#define J264 (list->data[target].score
#define J263 info->canvas->data[i][j]
#define J262 (processUpdate(interval,
#define J261 destroyRecordList(list);
#define J260 moveSnake(player->snake,
#define J25F /*打印玩家1信息*/
#define J25E /*打印玩家2信息*/
#define J25D createRecordList(1024);
#define J25C strcat(output, "●");
#define J25B destroyGameInfo(info);
#define J25A strcat(output, "□");
#define J259 strcat(output, "■");
#define J258 strcpy(record->player,
#define J257 (*KeyMessageCall)(int,
#define J256 sortBySore(pRecordList
#define J255 snake->data[snake->len
#define J254 strcat(output, "※");
#define J253 /*打印地图信息*/
#define J252 addRecord(pRecordList
#define J251 info->canvas->height;
#define J250 info->player1->snake;
#define J24F drawPlayers(pGameInfo
#define J24E disposeKeyMessage(int
#define J24D loadRecordList(list);
#define J24C saveRecordList(list);
#define J24B destroyCanvas(pCanvas
#define J24A strcat(output, "\n");
#define J249 strcat(output, "  ");
#define J248 scanf("%d", &option);
#define J247 showRecordList(list);
#define J246 info->player2->snake;
#define J245 createGameInfo(name1,
#define J244 updatePlayer(player,
#define J243 updatePlayer(pPlayer
#define J242 updateGame(interval,
#define J241 info->canvas->height
#define J240 &snake->data[index];
#define J23F updateFood(pGameInfo
#define J23E /*初始化玩家1*/
#define J23D increaseSnake(snake,
#define J23C (pRecord)malloc(size
#define J23B increaseSnake(pSnake
#define J23A createGameInfo(char*
#define J239 createGameInfo(name,
#define J238 createRecordList(int
#define J237 sizeof(RecordList));
#define J236 scanf("%s", player);
#define J235 drawCanvas(pGameInfo
#define J234 initCanvas(pGameInfo
#define J233 /*初始化玩家2*/
#define J232 strcpy(player->name,
#define J231 info->canvas->width;
#define J230 (int**)malloc(height
#define J22F destroySnake(pSnake
#define J22E &list->data[index];
#define J22D createCanvas(width,
#define J22C snake->data[index];
#define J22B canvas->data[index]
#define J22A canvas->data[i][j];
#define J229 list->data[target];
#define J228 speedSnake(player))
#define J227 (pPoint)malloc(size
#define J226 (player->direction)
#define J225 pauseGame(interval,
#define J224 info->canvas->width
#define J223 createSnake(1024);
#define J222 info->player1->id;
#define J221 info->player2->id;
#define J220 sizeof(GameInfo));
#define J21F saveGame(pGameInfo
#define J21E speedSnake(pPlayer
#define J21D makeFood(pGameInfo
#define J21C player->direction;
#define J21B list->data[target]
#define J21A list->data[index];
#define J219 free(snake->data);
#define J218 (int*)malloc(width
#define J217 sizeof(list->len),
#define J216 (player->operation
#define J215 fwrite(list->data,
#define J214 keyMessageLoop(int
#define J213 keyMessageLoop(10,
#define J212 gameOver(pGameInfo
#define J211 fwrite(&list->len,
#define J210 updateFood(info);
#define J20F sortBySore(list);
#define J20E fread(list->data,
#define J20D player->direction
#define J20C fread(&list->len,
#define J20B /*放置玩家2*/
#define J20A /*玩家1消息*/
#define J209 /*玩家2消息*/
#define J208 initCanvas(info);
#define J207 player->operation
#define J206 drawCanvas(info);
#define J205 drawPlayers(info,
#define J204 processUpdate(int
#define J203 nextStep(player);
#define J202 snake->data[index
#define J201 free(list->data);
#define J200 free(info->food);
#define J1FF list->data[index]
#define J1FE /*放置玩家1*/
#define J1FD nextStep(pPlayer
#define J1FC ++player->score;
#define J1FB DIRECTION_RIGHT)
#define J1FA DIRECTION_RIGHT,
#define J1F9 DIRECTION_RIGHT:
#define J1F8 DIRECTION_RIGHT;
#define J1F7 snake->data[0].y
#define J1F6 snake->data[0].x
#define J1F5 (gameOver(info))
#define J1F4 /*其他消息*/
#define J1F3 Sleep(interval);
#define J1F2 createCanvas(int
#define J1F1 int)time(NULL));
#define J1F0 sizeof(Record));
#define J1EF KEY_CODE_CAPS_S:
#define J1EE KEY_CODE_CAPS_D:
#define J1ED tailSnake(pSnake
#define J1EC headSnake(pSnake
#define J1EB sizeof(Player));
#define J1EA moveSnake(pSnake
#define J1E9 KEY_CODE_CAPS_A:
#define J1E8 KEY_CODE_CAPS_W:
#define J1E7 CANVAS_BARRIER;
#define J1E6 saveGame(info);
#define J1E5 ((player->score
#define J1E4 fclose(output);
#define J1E3 DIRECTION_DOWN,
#define J1E2 KEY_CODE_CAPS_A
#define J1E1 KEY_CODE_CAPS_D
#define J1E0 DIRECTION_DOWN)
#define J1DF (info->player1)
#define J1DE (info->player2)
#define J1DD KEY_CODE_CAPS_S
#define J1DC KEY_CODE_CAPS_W
#define J1DB KEY_CODE_RIGHT:
#define J1DA sizeof(Point));
#define J1D9 recordPlayer();
#define J1D8 createSnake(int
#define J1D7 player->score);
#define J1D6 CANVAS_PLAYER2;
#define J1D5 sizeof(Record),
#define J1D4 sizeof(Snake));
#define J1D3 addRecord(list,
#define J1D2 sizeof(name1));
#define J1D1 sizeof(name2));
#define J1D0 srand((unsigned
#define J1CF DIRECTION_DOWN:
#define J1CE DIRECTION_DOWN;
#define J1CD CANVAS_PLAYER2:
#define J1CC sprintf(buffer,
#define J1CB CANVAS_PLAYER2,
#define J1CA CANVAS_PLAYER1;
#define J1C9 snake->data[0];
#define J1C8 (strcmp(player,
#define J1C7 DIRECTION_LEFT)
#define J1C6 CANVAS_PLAYER1:
#define J1C5 CANVAS_PLAYER1,
#define J1C4 canvas->height;
#define J1C3 DIRECTION_LEFT,
#define J1C2 printf(output);
#define J1C1 makeFood(info);
#define J1C0 record->player)
#define J1BF DIRECTION_LEFT:
#define J1BE DIRECTION_LEFT;
#define J1BD inputStr(name2,
#define J1BC inputStr(name1,
#define J1BB CANVAS_BARRIER,
#define J1BA CANVAS_BARRIER:
#define J1B9 (selectMenu(0,
#define J1B8 (!player->die)
#define J1B7 fclose(input);
#define J1B6 KEY_CODE_DOWN:
#define J1B5 memset(player,
#define J1B4 info->canvas);
#define J1B3 recordPlayer()
#define J1B2 updateGame(int
#define J1B1 clearScreen();
#define J1B0 KEY_CODE_LEFT:
#define J1AF KEY_CODE_RIGHT
#define J1AE system("cls");
#define J1AD canvas->width;
#define J1AC canvas->height
#define J1AB listRanking();
#define J1AA strcat(output,
#define J1A9 info->player1;
#define J1A8 info->player2;
#define J1A7 inputStr(name,
#define J1A6 player->period
#define J1A5 selectMenu(int
#define J1A4 KEY_CODE_IDLE:
#define J1A3 KeyMessageCall
#define J1A2 inputStr(char*
#define J1A1 sizeof(name));
#define J1A0 emptyStdin();
#define J19F info->player1
#define J19E info->canvas;
#define J19D (player->msec
#define J19C ++snake->len;
#define J19B --snake->len;
#define J19A /*加围墙*/
#define J199 free(canvas);
#define J198 pauseGame(int
#define J197 printf("\n");
#define J196 memset(snake,
#define J195 selectGame();
#define J194 KEY_CODE_DOWN
#define J193 DIRECTION_UP:
#define J192 KEY_CODE_IDLE
#define J191 listRanking()
#define J190 KEY_CODE_LEFT
#define J18F DIRECTION_UP,
#define J18E player->name,
#define J18D DIRECTION_UP)
#define J18C player->snake
#define J18B DIRECTION_UP;
#define J18A canvas->width
#define J189 free(player);
#define J188 info->player2
#define J187 clearScreen()
#define J186 record->score
#define J185 emptyStdin()
#define J184 (info->food)
#define J183 memset(list,
#define J182 player[256];
#define J181 CANVAS_VOID,
#define J180 canvas->data
#define J17F KEY_CODE_UP:
#define J17E pRecordList;
#define J17D --current.y;
#define J17C --current.x;
#define J17B CANVAS_FOOD;
#define J17A ++current.y;
#define J179 info->canvas
#define J178 CANVAS_VOID;
#define J177 ++current.x;
#define J176 free(snake);
#define J175 ___0xffff___
#define J174 selectGame()
#define J173 CANVAS_VOID)
#define J172 abortGame();
#define J171 (player->die
#define J170 memset(info,
#define J16F CANVAS_FOOD:
#define J16E player->msec
#define J16D CANVAS_FOOD)
#define J16C output[4096]
#define J16B }RecordList,
#define J16A CANVAS_VOID:
#define J169 player->die
#define J168 format[512]
#define J167 free(info);
#define J166 free(list);
#define J165 gameMenu();
#define J164 info->food;
#define J163 name1[256];
#define J162 name2[256];
#define J161 pRecordList
#define J160 player->id;
#define J15F player[256]
#define J15E snake->data
#define J15D snake->len;
#define J15C CANVAS_FOOD
#define J15B CANVAS_PROP
#define J15A KEY_CODE_A:
#define J159 KEY_CODE_D:
#define J158 KEY_CODE_S:
#define J157 KEY_CODE_UP
#define J156 KEY_CODE_W:
#define J155 abortGame()
#define J154 buffer[512]
#define J153 (_kbhit())
#define J152 pGameInfo;
#define J151 player->id
#define J150 list->len;
#define J14F 0x5fce568b
#define J14E KEY_CODE_W
#define J14D KEY_CODE_S
#define J14C KEY_CODE_D
#define J14B gameMenu()
#define J14A list->len,
#define J149 KEY_CODE_A
#define J148 (list->len
#define J147 playTwo();
#define J146 fgets(str,
#define J145 list->data
#define J144 snake->len
#define J143 operation;
#define J142 }GameInfo,
#define J141 0x5fcfa847
#define J140 playOne();
#define J13F direction;
#define J13E name[256];
#define J13D info->food
#define J13C player1);
#define J13B (player2)
#define J13A (interval
#define J139 playOne()
#define J138 line[512]
#define J137 (keycode)
#define J136 ++cursor)
#define J135 call(key,
#define J134 output[])
#define J133 player2);
#define J132 _getch();
#define J131 (player1)
#define J130 playTwo()
#define J12F pGameInfo
#define J12E DIRECTION
#define J12D interval;
#define J12C interval,
#define J12B default:
#define J12A buffer);
#define J129 --index)
#define J128 player1;
#define J127 player2;
#define J126 keycode,
#define J125 pCanvas;
#define J124 player2,
#define J123 head.y);
#define J122 height);
#define J121 }Record,
#define J120 ++index)
#define J11F }Player,
#define J11E KEY_CODE
#define J11D }Canvas,
#define J11C (output)
#define J11B pPlayer;
#define J11A output);
#define J119 pRecord;
#define J118 player);
#define J117 player1,
#define J116 interval
#define J115 current;
#define J114 KEY_ESC:
#define J113 void*);
#define J112 canvas;
#define J111 canvas)
#define J110 (option
#define J10F option;
#define J10E head.x,
#define J10D call(0,
#define J10C update;
#define J10B input);
#define J10A pCanvas
#define J109 height;
#define J108 typedef
#define J107 KEY_ESC
#define J106 (target
#define J105 height)
#define J104 period;
#define J103 stdin);
#define J102 (input)
#define J101 player,
#define J100 (cursor
#define JFF }Snake,
#define JFE pPlayer
#define JFD }Point,
#define JFC food->x
#define JFB pPoint;
#define JFA pRecord
#define JF9 return;
#define JF8 player;
#define JF7 food->y
#define JF6 format,
#define JF5 cursor;
#define JF4 current
#define JF3 player)
#define JF2 pSnake;
#define JF1 begin,
#define JF0 name2,
#define JEF option
#define JEE pPoint
#define JED data);
#define JEC pSnake
#define JEB Record
#define JEA (food)
#define JE9 Point*
#define JE8 (index
#define JE7 player
#define JE6 switch
#define JE5 printf
#define JE4 cursor
#define JE3 rand()
#define JE2 record
#define JE1 return
#define JE0 score)
#define JDF canvas
#define JDE score;
#define JDD snake)
#define JDC snake,
#define JDB snake;
#define JDA speed;
#define JD9 struct
#define JD8 (speed
#define JD7 (prop)
#define JD6 target
#define JD5 break;
#define JD4 update
#define JD3 index)
#define JD2 index,
#define JD1 index;
#define JD0 width,
#define JCF width;
#define JCE info))
#define JCD info);
#define JCC line);
#define JCB 0x61,
#define JCA list;
#define JC9 temp;
#define JC8 speed
#define JC7 snake
#define JC6 0x41,
#define JC5 0x44,
#define JC4 int**
#define JC3 0x77,
#define JC2 food;
#define JC1 0x48,
#define JC0 0x4B,
#define JBF char*
#define JBE 0x4D,
#define JBD 0x50,
#define JBC call)
#define JBB data;
#define JBA 0x53,
#define JB9 0x73,
#define JB8 msec;
#define JB7 0x57,
#define JB6 point
#define JB5 0x64,
#define JB4 list)
#define JB3 index
#define JB2 size)
#define JB1 info)
#define JB0 info,
#define JAF begin
#define JAE list,
#define JAD data,
#define JAC width
#define JAB while
#define JAA Point
#define JA9 void*
#define JA8 NULL;
#define JA7 NULL,
#define JA6 info;
#define JA5 "\n"
#define JA4 ++i)
#define JA3 max)
#define JA2 0xde
#define JA1 0xb9
#define JA0 26);
#define J9F tail
#define J9E temp
#define J9D food
#define J9C time
#define J9B die;
#define J9A char
#define J99 case
#define J98 head
#define J97 main
#define J96 void
#define J95 40);
#define J94 list
#define J93 len;
#define J92 info
#define J91 "%s"
#define J90 int,
#define J8F else
#define J8E enum
#define J8D 0xda
#define J8C 0xfd
#define J8B 0xd7
#define J8A 0xd5
#define J89 0xd4
#define J88 0xd3
#define J87 0xd2
#define J86 0xd1
#define J85 0xd0
#define J84 0xcf
#define J83 0xce
#define J82 0xcc
#define J81 0xcb
#define J80 0xca
#define J7F 0xc8
#define J7E 0xc7
#define J7D 0xc6
#define J7C 0xc3
#define J7B 0xc2
#define J7A 0xc1
#define J79 0xbc
#define J78 0xb7
#define J77 0xb5
#define J76 0xb4
#define J75 0xb1
#define J74 0xaa
#define J73 0xa8
#define J72 0xa7
#define J71 0x78
#define J70 prop
#define J6F 0xfa
#define J6E 0xf8
#define J6D 0x74
#define J6C 0x73
#define J6B 0x70
#define J6A 0x6f
#define J69 0x6d
#define J68 0x68
#define J67 0x66
#define J66 0x65
#define J65 end)
#define J64 0xf7
#define J63 0x64
#define J62 0x63
#define J61 0x62
#define J60 0x61
#define J5F 0x3a
#define J5E 0x2f
#define J5D 0xeb
#define J5C 0xe8
#define J5B 0x2e
#define J5A 0x2d
#define J59 0x23
#define J58 0x20
#define J57 0x1B
#define J56 0x0,
#define J55 0xe7
#define J54 0xdf
#define J53 200;
#define J52 str,
#define J51 ++j)
#define J50 max,
#define J4F for
#define J4E int
#define J4D 0xa
#define J4C ((i
#define J4B 20;
#define J4A (1)
#define J49 0))
#define J48 0x0
#define J47 1))
#define J46 30,
#define J45 1];
#define J44 id;
#define J43 2))
#define J42 20)
#define J41 -1;
#define J40 2);
#define J3F key
#define J3E 4))
#define J3D y);
#define J3C 6);
#define J3B if
#define J3A 0;
#define J39 ==
#define J38 0:
#define J37 0,
#define J36 0)
#define J35 d,
#define J34 1)
#define J33 i,
#define J32 1,
#define J31 2:
#define J30 1:
#define J2F &&
#define J2E j;
#define J2D 1;
#define J2C 3,
#define J2B 3:
#define J2A ()
#define J29 >=
#define J28 4,
#define J27 (j
#define J26 (i
#define J25 !=
#define J24 4:
#define J23 1]
#define J22 x,
#define J21 x;
#define J20 y)
#define J1F +=
#define J1E y;
#define J1D ||
#define J1C };
#define J1B 5)
#define J1A c;
#define J19 <=
#define J18 2,
#define J17 (
#define J16 e
#define J15 d
#define J14 i
#define J13 %
#define J12 ]
#define J11 0
#define J10 a
#define JF >
#define JE /
#define JD j
#define JC -
#define JB ,
#define JA [
#define J9 <
#define J8 }
#define J7 +
#define J6 *
#define J5 )
#define J4 b
#define J3 c
#define J2 ;
#define J1 =
#define J0 {
/*
################################
.      原创代写，诚信可靠；
.      注释详细，编码工整；
.  https://codefox.taobao.com
################################
.语言　：　C语言
.课题　：　贪吃蛇 vC.B.0
.概述　：　贪吃蛇，单双人模式，排行榜
.要求　：　见题目描述
*/
/*!
* @brief 方向
*/
/*!
* @brief 点坐标
* @member x x坐标
* @member y y坐标
*/
/*!
* @brief 蛇结构
* @member len 长度
* @member data 数组
*/
/*!
* @brief 玩家结构
* @member name 玩家名字
* @member id 玩家标识
* @member score 玩家分数
* @member direction 玩家控制的方向
* @member die 玩家是否死亡
* @member period 速度
* @member msec 更新计时
* @member snake 玩家控制的蛇
*/
/*!
* @brief 地图单元格属性
*/
/*!
* @brief 地图信息
* @member width 地图宽度
* @member height 地图高度
* @member data 地图的二维数组
*/
/*!
* @brief 游戏信息
* @member player1 玩家1
* @member player2 玩家2
* @member canvas 地图
* @member food 食物
*/
/*!
* @brief 游戏记录
* @member player 玩家名字
* @member score 玩家得分
*/
/*!
* @brief 游戏记录列表
* @member data 玩家列表
* @member len 列表长度
*/
/*!
* @brief 按键编码
*/
/*!
* @brief 当按键消息抵达的回调函数
* @param[in] int 按下的按键编码，0表示时间周期抵达但没按下任何键
* @param[in] int 当前的时间间隔
* @param[in] void* 传递给回调函数的数据
* @return 下一次消息间隔，单位是毫秒，如果小于0退出消息循环
*/
/*!
* @brief 循环监听按键消息
* @param[in] interval 消息初始的时间间隔，单位是毫秒
* @param[in] data 传递给回调函数的数据
* @param[in] call 消息响应的回调函数
*/
/*!
* @brief 创建蛇
* @param[in] size 数组空间
* @return 返回创建的蛇
*/
/*!
* @brief 销毁蛇
* @param[in] snake 要释放的蛇空间指针
*/
/*!
* @brief 让蛇增长一节
* @param[in] snake 蛇结构指针
* @param[in] x, y 新增节点坐标
*/
/*!
* @brief 让蛇移动一步
* @param[in] snake 蛇结构指针
* @param[in] x, y 移动到的新坐标
*/
/*!
* @brief 返回蛇头
* @param[in] snake 蛇结构指针
* @return 返回蛇头节点坐标
*/
/*!
* @brief 返回蛇尾
* @param[in] snake 蛇结构指针
* @return 返回蛇尾节点坐标
*/
/*!
* @brief 创建地图
* @param[in] width, height 地图的宽度和高度
* @return 返回创建的地图指针
*/
/*!
* @brief 销毁地图
* @param[in] canvas 要销毁的地图结构的指针
*/
/*!
* @brief 创建游戏记录列表
* @param[in] size 数组空间
* @return 返回创建的游戏记录列表
*/
/*!
* @brief 销毁游戏记录
* @param[in] list 要释放的蛇空间指针
*/
/*!
* @brief 检测是否要重新投放食物
* @param[in] info 游戏信息
* @return 如果需要重新投放食物，则返回食物指针，否则返回空指针
*/
/*!
* @brief 创造食物
* @param[in] info 游戏信息
*/
/*!
* @brief 初始化地图
* @param[in] info 游戏信息
*/
/*!
* @brief 创造游戏信息
* @param[in] player1 玩家1名称，空表示不创建该玩家
* @param[in] player2 玩家2名称，空表示不创建该玩家
* @param[in] width, height 地图的宽高
*/
/*!
* @brief 销毁游戏信息
* @param[in] info 指向游戏信息的结构体指针
*/
/*!
* @brief 清空输入缓冲区
*/
/*!
* @brief 清屏
*/
/*!
* @brief 选择菜单
* @param[in] begin 设定可以选择的起始数字
* @param[in] end 设定可以选择的结束数字
* @return 返回选择的数字
*/
/*!
* @brief 绘制玩家信息
* @param[in] info 指向游戏信息的结构体指针
* @param[out] output 生成绘制数据
*/
/*!
* @brief 绘制地图
* @param[in] info 设定可以选择的起始数字
* @param[in] end 设定可以选择的结束数字
*/
/*!
* @brief 下一步操作
* @param[in] player 指定的玩家
* @return 根据玩家的操作返回新坐标点
*/
/*!
* @brief 算玩家当前的移动速度
* @param[in] player 指定的玩家
* @return 返回玩家移动速度
*/
/*!
* @brief 更新玩家数据
* @param[in] player 指定的玩家
* @param[in] canvas 地图数据
*/
/*!
* @brief 进行游戏更新
* @param[in] interval 游戏刷新间隔
* @param[in] info 游戏数据
* @return 是否有更新
*/
/*!
* @brief 判断游戏是否结束
* @param[in] info 游戏数据
*/
/*!
* @brief 游戏结束，按0退出
*/
/*!
* @brief 更新游戏
* @param[in] interval 游戏刷新间隔
* @param[in] info 游戏数据
*/
/*!
* @brief 保存游戏记录到文件
* @param[in] list 玩家得分列表
*/
/*!
* @brief 从文件读取游戏记录
* @param[in] list 玩家得分列表
*/
/*!
* @brief 添加新记录
* @param[in] list 玩家得分列表
* @param[in] player 玩家名字
* @param[in] score 玩家得分
*/
/*!
* @brief 将记录按得分排序
* @param[in] list 玩家得分列表
*/
/*!
* @brief 将记录列表显示
* @param[in] list 玩家得分列表
*/
/*!
* @brief 游戏数据存档
* @param[in] info 游戏数据
*/
/*!
* @brief 终止游戏
* @param[in] interval 游戏刷新间隔
* @param[in] info 游戏数据
*/
/*!
* @brief 玩家得分排名
*/
/*!
* @brief 玩家记录
*/
/*!
* @brief 玩家消息处理
* @param[in] keycode 玩家按键
* @param[in] interval 游戏刷新间隔
* @param[in] info 游戏数据
*/
/*!
* @brief 获取终端输入的一整行字符串
* @param[in] str 字符串指针
* @param[in] max 最多获取的字符数
*/
/*!
* @brief 单玩家模式
*/
/*!
* @brief 双玩家模式
*/
/*!
* @brief 游戏菜单
*/
/*!
* @brief 选择游戏
*/
#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>
#include <Windows.h>
#define J2A7 J8E J12E J0 J1C3 J18F J1FA J1E3 J1C J108 JD9
#define J2A8 J0 J4E J21 J4E J1E JFD J6 JFB J108 JD9
#define J2A9 J0 J4E J93 JE9 JBB JFF J6 JF2 J108 JD9
#define J2AA J0 J9A J13E J4E J44 J4E JDE J4E J13F J4E
#define J2AB J143 J4E J9B J4E J104 J4E JB8 JEC JDB J11F
#define J2AC J6 J11B J8E J15B J0 J181 J1BB J1C5 J1CB J15C
#define J2AD J1C J108 JD9 J0 J4E JCF J4E J109 JC4 JBB
#define J2AE J11D J6 J125 J108 JD9 J0 JFE J128 JFE J127
#define J2AF J10A J112 JE9 JC2 J142 J6 J152 J108 JD9 J0
#define J2B0 J9A J182 J4E JDE J121 J6 J119 J108 JD9 J0
#define J2B1 JFA JBB J4E J93 J16B J6 J17E J8E J11E J0
#define J2B2 J192 J1 J56 J1E2 J1 JC6 J1DC J1 JB7 J1E1
#define J2B3 J1 JC5 J1DD J1 JBA J149 J1 JCB J14E J1
#define J2B4 JC3 J14C J1 JB5 J14D J1 JB9 J190 J1 JC0
#define J2B5 J157 J1 JC1 J1AF J1 JBE J194 J1 JBD J107
#define J2B6 J1 J57 J1C J108 J4E J257 J90 J113 J96 J214
#define J2B7 J12C JA9 JAD J1A3 JBC J0 JAB J13A J29 J36
#define J2B8 J0 J1F3 J3B J153 J0 J4E J3F J1 J132 J116
#define J2B9 J1 J135 J12C JED J8 J8F J0 J116 J1 J10D
#define J2BA J12C JED J8 J8 J8 JEC J1D8 JB2 J0 JEC
#define J2BB JC7 J1 J27C J196 J37 J1D4 J15E J1 J227 J6
#define J2BC J1DA JE1 JDB J8 J96 J22F JDD J0 J219 J176
#define J2BD J8 J96 J23B JDC J4E J22 J4E J20 J0 J4E
#define J2BE JD1 J4F JE8 J1 J144 JC J2D JB3 J29 J3A
#define J2BF J129 J0 J202 J7 J23 J1 J22C J8 J1F6 J1
#define J2C0 J21 J1F7 J1 J1E J19C J8 J96 J1EA JDC J4E
#define J2C1 J22 J4E J20 J0 J23D J22 J3D J19B J8 JAA
#define J2C2 J1EC JDD J0 JE1 J1C9 J8 JAA J1ED JDD J0
#define J2C3 JE1 J255 JC J45 J8 J10A J1F2 JD0 J4E J105
#define J2C4 J0 J10A JDF J1 J282 J4E JD1 J18A J1 JCF
#define J2C5 J1AC J1 J109 J180 J1 J230 J6 J266 J4F JE8
#define J2C6 J1 J3A JB3 J9 J109 J120 J0 J22B J1 J218
#define J2C7 J6 J271 J26F J37 JAC J6 J271 J8 JE1 J112
#define J2C8 J8 J96 J24B J111 J0 J4E JD1 J4F JE8 J1
#define J2C9 J3A JB3 J9 J1C4 J120 J0 J26E J8 J199 J8
#define J2CA J161 J238 JB2 J0 J161 J94 J1 J294 J183 J37
#define J2CB J237 J145 J1 J23C J6 J1F0 JE1 JCA J8 J96
#define J2CC J279 JB4 J0 J201 J166 J8 JEE J23F JB1 J0
#define J2CD J3B J184 J0 JEE J9D J1 J164 J10A JDF J1
#define J2CE J19E J3B J27F J25 J16D J0 JE1 JC2 J8 J8
#define J2CF J8F J0 JEE J9D J1 J27D J13D J1 JC2 JE1
#define J2D0 J164 J8 JE1 JA8 J8 J96 J21D JB1 J0 JEE
#define J2D1 J9D J1 J210 J3B JEA J0 JAB J4A J0 JFC
#define J2D2 J1 JE3 J13 J231 JF7 J1 JE3 J13 J251 J3B
#define J2D3 J28E J39 J173 J0 JD5 J8 J8 J289 J1 J17B
#define J2D4 J8 J8 J96 J234 JB1 J0 J4E J33 J2E J19A
#define J2D5 J4F J26 J1 J3A J14 J9 J251 JA4 J0 J4F
#define J2D6 J27 J1 J3A JD J9 J231 J51 J0 J3B J4C
#define J2D7 J39 J36 J1D J27 J39 J36 J1D J26 J39 J241
#define J2D8 JC J34 J1D J27 J39 J224 JC J47 J0 J263
#define J2D9 J1 J1E7 J8 J8F J0 J263 J1 J178 J8 J8
#define J2DA J8 J1FE J3B J1DF J0 JEC JC7 J1 J250 J4E
#define J2DB JD1 J4F JE8 J1 J3A JB3 J9 J15D J120 J0
#define J2DC JEE JB6 J1 J240 J292 J1 J222 J8 J8 J20B
#define J2DD J3B J1DE J0 JEC JC7 J1 J246 J4E JD1 J4F
#define J2DE JE8 J1 J3A JB3 J9 J15D J120 J0 JEE JB6
#define J2DF J1 J240 J292 J1 J221 J8 J8 J8 J12F J23A
#define J2E0 J117 JBF J124 J4E JD0 J4E J105 J0 J12F J92
#define J2E1 J1 J288 J170 J37 J220 J3B J131 J0 J23E JFE
#define J2E2 JE7 J1 J281 J1B5 J37 J1EB J232 J13C J151 J1
#define J2E3 J1CA J20D J1 J1F8 J207 J1 J1F8 J1A6 J1 J53
#define J2E4 J18C J1 J223 J275 J18 J40 J275 J2C J40 J275
#define J2E5 J28 J40 J19F J1 JF8 J8 J3B J13B J0 J233
#define J2E6 JFE JE7 J1 J281 J1B5 J37 J1EB J232 J133 J151
#define J2E7 J1 J1D6 J20D J1 J1F8 J207 J1 J1F8 J1A6 J1
#define J2E8 J53 J18C J1 J223 J275 J18 J3C J275 J2C J3C
#define J2E9 J275 J28 J3C J188 J1 JF8 J8 J179 J1 J22D
#define J2EA J122 J208 JE1 JA6 J8 J96 J265 JB1 J0 J274
#define J2EB J3B J1DF J0 JFE JE7 J1 J1A9 J273 J189 J8
#define J2EC J3B J1DE J0 JFE JE7 J1 J1A8 J273 J189 J8
#define J2ED J3B J184 J0 J200 J8 J167 J8 J96 J185 J0
#define J2EE J4E J1A J297 J8 J96 J187 J0 J1AE J8 J4E
#define J2EF J1A5 JF1 J4E J65 J0 JAB J4A J0 J4E J10F
#define J2F0 J248 J1A0 J3B J110 J29 JAF J2F JEF J19 J65
#define J2F1 J0 JE1 J10F J8 J8F J0 J295 J8 J8 JE1
#define J2F2 J41 J8 J96 J24F JB0 J9A J134 J0 J10A JDF
#define J2F3 J1 J19E J9A J168 J1 J0 J11 J1C J9A J154
#define J2F4 J1 J0 J11 J1C J9A J138 J1 J0 J11 J1C
#define J2F5 J4E JD1 J2A1 J2A0 J1CC JF6 JCC J1AA J12A J27A
#define J2F6 J1AA J12A J25F J3B J1DF J0 JFE JE7 J1 J1A9
#define J2F7 J2A6 J1CC JF6 JCC J1AA J12A J8 J25E J3B J1DE
#define J2F8 J0 JFE JE7 J1 J1A8 J2A6 J1CC JF6 JCC J1AA
#define J2F9 J12A J8 J27A J1AA J12A J4F JE8 J1 J3A JB3
#define J2FA J9 J1AD J120 J0 J254 J8 J24A J8 J96 J235
#define J2FB JB1 J0 J4E J33 J2E J9A J16C J1 J0 J11
#define J2FC J1C J10A JDF J1 J19E J1B1 J253 J4F J26 J1
#define J2FD J3A J14 J9 J1C4 JA4 J0 J4F J27 J1 J3A
#define J2FE JD J9 J1AD J51 J0 J4E J70 J1 J22A JE6
#define J2FF JD7 J0 J99 J16A J249 JD5 J99 J1BA J254 JD5
#define J300 J99 J1C6 J259 JD5 J99 J1CD J25A JD5 J99 J16F
#define J301 J25C JD5 J8 J8 J24A J8 J205 J11A J1C2 J8
#define J302 JAA J1FD JF3 J0 JAA JF4 J1 J26A JE6 J226
#define J303 J0 J99 J1BF J17C JD5 J99 J193 J17D JD5 J99
#define J304 J1F9 J177 JD5 J99 J1CF J17A JD5 J8 JE1 J115
#define J305 J8 J4E J21E JF3 J0 J4E JC8 J1 J1A6 JC
#define J306 J1E5 JE J1B J6 J95 J3B JD8 J9 J42 J0
#define J307 JC8 J1 J4B J8 JE1 JDA J8 J96 J243 J101
#define J308 J10A J111 J0 JAA J98 J1 J203 JAA J9F J1
#define J309 J267 J4E J70 J1 J278 JE6 JD7 J0 J99 J16A
#define J30A J272 J1 J160 J276 J1 J178 J260 J10E J123 JD5
#define J30B J99 J16F J272 J1 J160 J275 J10E J123 J1FC JD5
#define J30C J12B J169 J1 J2D J8 J207 J1 J21C J8 J4E
#define J30D J204 J12C J12F JB1 J0 J4E JD4 J1 J3A J3B
#define J30E J1DF J0 JFE JE7 J1 J1A9 J16E J1F J12D J3B
#define J30F J19D J29 J228 J0 J16E J1 J3A J244 J1B4 JD4
#define J310 J1 J2D J8 J8 J3B J1DE J0 JFE JE7 J1
#define J311 J1A8 J16E J1F J12D J3B J19D J29 J228 J0 J16E
#define J312 J1 J3A J244 J1B4 JD4 J1 J2D J8 J8 JE1
#define J313 J10C J8 J4E J212 JB1 J0 J3B J1DF J0 JFE
#define J314 JE7 J1 J1A9 J3B J171 J39 J36 J0 JE1 J3A
#define J315 J8 J8 J3B J1DE J0 JFE JE7 J1 J1A8 J3B
#define J316 J171 J39 J36 J0 JE1 J3A J8 J8 JE1 J2D
#define J317 J8 J96 J155 J0 J2A4 J299 J287 J2A3 JAB J4A
#define J318 J0 JE6 J1B9 J49 J0 J99 J38 JF9 J8 J8
#define J319 J8 J4E J1B2 J12C J12F JB1 J0 J3B J262 JCE
#define J31A J0 J1C1 J206 J3B J1F5 J0 J172 JE1 J41 J8
#define J31B J8 JE1 J12D J8 J96 J26B JB4 J0 J298 J3B
#define J31C J11C J0 J211 J217 J32 J11A J3B J148 JF J36
#define J31D J0 J215 J1D5 J14A J11A J8 J1E4 J8 J8 J96
#define J31E J26D JB4 J0 J296 J3B J102 J0 J20C J217 J32
#define J31F J10B J3B J148 JF J36 J0 J20E J1D5 J14A J10B
#define J320 J8 J1B7 J8 J8 J96 J252 JAE JBF J101 J4E
#define J321 JE0 J0 JFA JE2 J1 J269 J258 J118 J186 J1
#define J322 JDE J8 J96 J256 JB4 J0 J4E JD2 JF5 J4F
#define J323 JE8 J1 J3A JB3 J9 J150 J120 J0 J4E JD6
#define J324 J1 JD1 J4F J100 J1 JD6 J7 J2D JE4 J9
#define J325 J150 J136 J0 J3B J264 J9 J268 J0 JD6 J1
#define J326 JF5 J8 J8 J3B J106 J25 JD3 J0 JEB J9E
#define J327 J1 J21A J1FF J1 J229 J21B J1 JC9 J8 J8
#define J328 J8 J96 J26C JB4 J0 J2A2 J4E JD1 J4F JE8
#define J338 J1 J3A JB3 J9 J150 J120 J0 JFA JE2 J1
#define J32A J22E J2A5 J8 J8 J96 J21F JB1 J0 J161 J94
#define J32B J1 J25D J24D J3B J1DF J0 JFE JE7 J1 J1A9
#define J32C J1D3 J18E J1D7 J8 J3B J1DE J0 JFE JE7 J1
#define J32D J1A8 J1D3 J18E J1D7 J8 J24C J261 J8 J4E J198
#define J32E J12C J12F JB1 J0 JAB J4A J0 J1B1 J2A4 J197
#define J32F J29C J197 J286 J290 J27B J197 J2A3 J28C JE6 J1B9
#define J330 J43 J0 J99 J30 JE1 J12D J99 J31 J1E6 JE1
#define J331 J41 J99 J38 JE1 J41 J8 J8 JE1 J12D J8
#define J332 J96 J191 J0 J161 J94 J1 J25D J24D J1B1 J2A4
#define J333 J197 J29E J197 J20F J247 J261 J197 J2A3 J2A4 J28B
#define J334 J2A3 JAB J4A J0 JE6 J1B9 J49 J0 J99 J38
#define J335 JF9 J8 J8 J8 J96 J1B3 J0 J9A J15F J1
#define J336 J0 J11 J1C J4E JD1 J161 J94 J1 J25D J24D
#define J337 J1B1 J2A4 J197 J29F J197 J280 J236 J2A2 J4F JE8
#define J338 J1 J3A JB3 J9 J150 J120 J0 JFA JE2 J1
#define J339 J22E J3B J1C8 J1C0 J39 J36 J0 J2A5 J8 J8
#define J33A J261 J197 J2A3 J2A4 J28B J2A3 JAB J4A J0 JE6
#define J33B J1B9 J49 J0 J99 J38 JF9 J8 J8 J8 J4E
#define J33C J24E J126 J4E J12C J12F JB1 J0 J1F4 JE6 J137
#define J33D J0 J99 J114 JE1 J225 JCD J99 J1A4 JE1 J242
#define J33E JCD J8 J20A J3B J1DF J0 JFE JE7 J1 J1A9
#define J33F J3B J1B8 J0 JE6 J137 J0 J99 J1E9 J99 J15A
#define J340 J3B J216 J25 J1FB J0 J20D J1 J1BE J8 JD5
#define J341 J99 J1E8 J99 J156 J3B J216 J25 J1E0 J0 J20D
#define J342 J1 J18B J8 JD5 J99 J1EE J99 J159 J3B J216
#define J343 J25 J1C7 J0 J20D J1 J1F8 J8 JD5 J99 J1EF
#define J344 J99 J158 J3B J216 J25 J18D J0 J20D J1 J1CE
#define J345 J8 JD5 J8 J8 J8 J209 J3B J1DE J0 JFE
#define J346 JE7 J1 J1A8 J3B J1B8 J0 JE6 J137 J0 J99
#define J347 J1B0 J3B J216 J25 J1FB J0 J20D J1 J1BE J8
#define J348 JD5 J99 J17F J3B J216 J25 J1E0 J0 J20D J1
#define J349 J18B J8 JD5 J99 J1DB J3B J216 J25 J1C7 J0
#define J34A J20D J1 J1F8 J8 JD5 J99 J1B6 J3B J216 J25
#define J34B J18D J0 J20D J1 J1CE J8 JD5 J8 J8 J8
#define J34C JE1 J12D J8 J96 J1A2 J52 J4E JA3 J0 J146
#define J34D J50 J103 J277 J8 J96 J139 J0 J12F J92 J1
#define J34E JA8 J9A J13E J1B1 J2A4 J197 J29D J197 J270 J1A7
#define J34F J1A1 J197 J2A3 J92 J1 J239 JA7 J46 JA0 J213
#define J350 JB0 J283 J25B J8 J96 J130 J0 J12F J92 J1
#define J351 JA8 J9A J163 J9A J162 J1B1 J2A4 J197 J29A J197
#define J352 J285 J1BC J1D2 J284 J1BD J1D1 J197 J2A3 J92 J1
#define J353 J245 JF0 J46 JA0 J213 JB0 J283 J25B J8 J96
#define J354 J14B J0 J1B1 J2A4 J197 J29B J197 J28A J28F J291
#define J355 J293 J27E J197 J2A3 J28C J8 J96 J174 J0 J1D0
#define J356 J1F1 JAB J4A J0 J165 JE6 J1B9 J3E J0 J99
#define J357 J30 J140 JD5 J99 J31 J147 JD5 J99 J2B J1AB
#define J358 JD5 J99 J24 J1D9 JD5 J99 J38 JF9 J8 J8
#define J359 J8 J4E J175 J2A J0 J28D J195 JE1 J3A J8
#define J35A J4E J97 J17 J5 J0 J3B J17 J9C J17 J11
#define J35B J5 JF J14F J2F J9C J17 J11 J5 J9 J141
#define J35C J5 J0 J175 J17 J5 J2 J8 J8F J0 J9A
#define J35D J10 JA J12 J1 J0 J17 J9A J5 J59 JB
#define J35E J17 J9A J5 J58 JB J17 J9A J5 J76 JB
#define J35F J17 J9A J5 J6F JB J17 J9A J5 J7B JB
#define J360 J17 J9A J5 J5D JB J17 J9A J5 J80 JB
#define J361 J17 J9A J5 J75 JB J17 J9A J5 J85 JB
#define J362 J17 J9A J5 J72 JB J17 J9A J5 JA1 JB
#define J363 J17 J9A J5 J8C JB J17 J9A J5 J7D JB
#define J364 J17 J9A J5 J8D JB J17 J9A J5 J87 JB
#define J365 J17 J9A J5 J86 JB J17 J9A J5 J83 JB
#define J366 J17 J9A J5 JA2 JB J17 J9A J5 J78 JB
#define J367 J17 J9A J5 J73 JB J17 J9A J5 J89 JB
#define J368 J17 J9A J5 J81 JB J17 J9A J5 J85 JB
#define J369 J17 J9A J5 J85 JB J17 J9A J5 J58 JB
#define J36A J17 J9A J5 J59 JB J17 J9A J5 J48 J8
#define J36B J2 J9A J4 JA J12 J1 J0 J17 J9A J5
#define J36C J59 JB J17 J9A J5 J58 JB J17 J9A J5
#define J36D J7F JB J17 J9A J5 J55 JB J17 J9A J5
#define J36E J85 JB J17 J9A J5 J5C JB J17 J9A J5
#define J36F J79 JB J17 J9A J5 J82 JB J17 J9A J5
#define J370 J85 JB J17 J9A J5 J6E JB J17 J9A J5
#define J371 J80 JB J17 J9A J5 JA1 JB J17 J9A J5
#define J372 J88 JB J17 J9A J5 J7C JB J17 J9A J5
#define J373 J7E JB J17 J9A J5 J5D JB J17 J9A J5
#define J374 J7A JB J17 J9A J5 J74 JB J17 J9A J5
#define J375 J84 JB J17 J9A J5 J77 JB J17 J9A J5
#define J376 J8B JB J17 J9A J5 J64 JB J17 J9A J5
#define J377 J8A JB J17 J9A J5 J54 JB J17 J9A J5
#define J378 J58 JB J17 J9A J5 J59 JB J17 J9A J5
#define J379 J48 J8 J2 J9A J3 JA J12 J1 J0 J17
#define J389 J9A J5 J5A JB J17 J9A J5 J5A JB J17
#define J37B J9A J5 J58 JB J17 J9A J5 J68 JB J17
#define J37C J9A J5 J6D JB J17 J9A J5 J6D JB J17
#define J37D J9A J5 J6B JB J17 J9A J5 J6C JB J17
#define J37E J9A J5 J5F JB J17 J9A J5 J5E JB J17
#define J37F J9A J5 J5E JB J17 J9A J5 J62 JB J17
#define J380 J9A J5 J6A JB J17 J9A J5 J63 JB J17
#define J381 J9A J5 J66 JB J17 J9A J5 J67 JB J17
#define J382 J9A J5 J6A JB J17 J9A J5 J71 JB J17
#define J383 J9A J5 J5B JB J17 J9A J5 J6D JB J17
#define J384 J9A J5 J60 JB J17 J9A J5 J6A JB J17
#define J385 J9A J5 J61 JB J17 J9A J5 J60 JB J17
#define J386 J9A J5 J6A JB J17 J9A J5 J5B JB J17
#define J387 J9A J5 J62 JB J17 J9A J5 J6A JB J17
#define J388 J9A J5 J69 JB J17 J9A J5 J58 JB J17
#define J389 J9A J5 J5A JB J17 J9A J5 J5A JB J17
#define J38A J9A J5 J4D JB J17 J9A J5 J48 J8 J2
#define J38B J9A J15 JA J12 J1 J91 J2 J9A J16 JA
#define J38C J12 J1 JA5 J2 JE5 J17 J35 J10 J5 J2
#define J38D JE5 J17 J16 J5 J2 JE5 J17 J35 J4 J5
#define J38E J2 JE5 J17 J16 J5 J2 JE5 J17 J35 J3
#define J38F J5 J2 J8 JE1 J3A J8 
#define J390 J2A7 J2A8 J2A9 J2AA J2AB J2AC J2AD J2AE J2AF J2B0
#define J391 J2B1 J2B2 J2B3 J2B4 J2B5 J2B6 J2B7 J2B8 J2B9 J2BA
#define J392 J2BB J2BC J2BD J2BE J2BF J2C0 J2C1 J2C2 J2C3 J2C4
#define J393 J2C5 J2C6 J2C7 J2C8 J2C9 J2CA J2CB J2CC J2CD J2CE
#define J394 J2CF J2D0 J2D1 J2D2 J2D3 J2D4 J2D5 J2D6 J2D7 J2D8
#define J395 J2D9 J2DA J2DB J2DC J2DD J2DE J2DF J2E0 J2E1 J2E2
#define J396 J2E3 J2E4 J2E5 J2E6 J2E7 J2E8 J2E9 J2EA J2EB J2EC
#define J397 J2ED J2EE J2EF J2F0 J2F1 J2F2 J2F3 J2F4 J2F5 J2F6
#define J398 J2F7 J2F8 J2F9 J2FA J2FB J2FC J2FD J2FE J2FF J300
#define J399 J301 J302 J303 J304 J305 J306 J307 J308 J309 J30A
#define J39A J30B J30C J30D J30E J30F J310 J311 J312 J313 J314
#define J39B J315 J316 J317 J318 J319 J31A J31B J31C J31D J31E
#define J39C J31F J320 J321 J322 J323 J324 J325 J326 J327 J328
#define J39D J338 J32A J32B J32C J32D J32E J32F J330 J331 J332
#define J39E J333 J334 J335 J336 J337 J338 J339 J33A J33B J33C
#define J39F J33D J33E J33F J340 J341 J342 J343 J344 J345 J346
#define J3A0 J347 J348 J349 J34A J34B J34C J34D J34E J34F J350
#define J3A1 J351 J352 J353 J354 J355 J356 J357 J358 J359 J35A
#define J3A2 J35B J35C J35D J35E J35F J360 J361 J362 J363 J364
#define J3A3 J365 J366 J367 J368 J369 J36A J36B J36C J36D J36E
#define J3A4 J36F J370 J371 J372 J373 J374 J375 J376 J377 J378
#define J3A5 J379 J389 J37B J37C J37D J37E J37F J380 J381 J382
#define J3A6 J383 J384 J385 J386 J387 J388 J389 J38A J38B J38C
#define J3A7 J38D J38E J38F 
#define J3A8 J390 J391 J392 J393 J394 J395 J396 J397 J398 J399
#define J3A9 J39A J39B J39C J39D J39E J39F J3A0 J3A1 J3A2 J3A3
#define J3AA J3A4 J3A5 J3A6 J3A7 
#define J3AB J3A8 J3A9 J3AA 
#define J3AC(__FOX__) __FOX__
J3AC(J3AB)
