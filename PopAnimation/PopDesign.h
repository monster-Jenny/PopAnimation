//
//  PopDesign.h
//  PopAnimation
//
//  Created by Monster on 2018/6/15.
//  Copyright © 2018年 Monster. All rights reserved.
//

#ifndef PopDesign_h
#define PopDesign_h
/**-----设计规范 基础Color-----**/
//通用颜色定义方式
#define EHCOLOR(r,g,b) [UIColor colorWithRed:(CGFloat)r/255. green:(CGFloat)g/255. blue:(CGFloat)b/255. alpha:1.]

//基本颜色定义
#define SDK_COLOR_C001   [UIColor whiteColor]//白色
#define SDK_COLOR_C002   [UIColor colorWithRed:248/255.0 green:248/255.0 blue:248/255.0 alpha:1]//绿灰
#define SDK_COLOR_C003   [UIColor colorWithRed:245/255.0 green:245/255.0 blue:245/255.0 alpha:1]//白灰
#define SDK_COLOR_C004   [UIColor colorWithRed:201/255.0 green:201/255.0 blue:206/255.0 alpha:1]//淡灰
#define SDK_COLOR_C005   [UIColor colorWithRed:217/255.0 green:217/255.0 blue:217/255.0 alpha:1]//浅灰
#define SDK_COLOR_C006   [UIColor colorWithRed:200/255.0 green:199/255.0 blue:204/255.0 alpha:1]//炭灰
#define SDK_COLOR_C007   [UIColor colorWithRed:155/255.0 green:155/255.0 blue:155/255.0 alpha:1]//暗灰
#define SDK_COLOR_C008   [UIColor colorWithRed:112/255.0 green:112/255.0 blue:112/255.0 alpha:1]//深灰
#define SDK_COLOR_C009   [UIColor blackColor]//黑色
#define SDK_COLOR_C010   [UIColor colorWithRed:210/255.0 green:209/255.0 blue:209/255.0 alpha:1]//银白

#define SDK_COLOR_C011   [UIColor colorWithRed:110/255.0 green:110/255.0 blue:116/255.0 alpha:1]//铅灰
#define SDK_COLOR_C012   [UIColor colorWithRed:224/255.0 green:239/255.0 blue:231/255.0 alpha:1]//红绯
#define SDK_COLOR_C013   [UIColor colorWithRed:204/255.0 green:219/255.0 blue:211/255.0 alpha:1]//主色暗点击
#define SDK_COLOR_C014   [UIColor colorWithRed:31/255.0 green:162/255.0 blue:77/255.0 alpha:1]//主色
#define SDK_COLOR_C015   [UIColor colorWithRed:21/255.0 green:111/255.0 blue:53/255.0 alpha:1]//主色点击
#define SDK_COLOR_C016   [UIColor colorWithRed:255/255.0 green:59/255.0 blue:48/255.0 alpha:1]//红绯
#define SDK_COLOR_C017   [UIColor colorWithRed:178/255.0 green:41/255.0 blue:33/255.0 alpha:1]//绯色
#define SDK_COLOR_C018   [UIColor colorWithRed:188/255.0 green:227/255.0 blue:202/255.0 alpha:1]//主色亮
#define SDK_COLOR_C019   [UIColor colorWithRed:165/255.0 green:218/255.0 blue:184/255.0 alpha:1]//主色亮点击
#define SDK_COLOR_C020   [UIColor colorWithRed:245/255.0 green:143/255.0 blue:62/255.0 alpha:1]//橙色

#define SDK_COLOR_C021   [UIColor colorWithRed:229/255.0 green:229/255.0 blue:234/255.0 alpha:1]//灰灰
#define SDK_COLOR_C022   [UIColor colorWithRed:0/255.0 green:82/255.0 blue:29/255.0 alpha:1]//辅助色
#define SDK_COLOR_C023   [UIColor colorWithRed:3/255.0 green:72/255.0 blue:118/255.0 alpha:1]//深蓝
#define SDK_COLOR_C024   [UIColor colorWithRed:220/255.0 green:230/255.0 blue:251/255.0 alpha:1]//亮蓝
#define SDK_COLOR_C025   [UIColor colorWithRed:185/255.0 green:196/255.0 blue:219/255.0 alpha:1]//暗亮蓝
#define SDK_COLOR_C026   [UIColor colorWithRed:11/255.0 green:135/255.0 blue:217/255.0 alpha:1]//科技蓝
#define SDK_COLOR_C027   [UIColor colorWithRed:36/255.0 green:104/255.0 blue:162/255.0 alpha:1]//点击科技蓝
#define SDK_COLOR_C028   [UIColor colorWithRed:189/255.0 green:209/255.0 blue:249/255.0 alpha:1]//透蓝
#define SDK_COLOR_C029   [UIColor colorWithRed:160/255.0 green:181/255.0 blue:223/255.0 alpha:1]//暗透蓝
#define SDK_COLOR_C030   [UIColor colorWithRed:77/255.0 green:59/255.0 blue:49/255.0 alpha:1]//深黄

#define SDK_COLOR_C031   [UIColor colorWithRed:244/255.0 green:226/255.0 blue:150/255.0 alpha:1]//亮黄
#define SDK_COLOR_C032   [UIColor colorWithRed:225/255.0 green:203/255.0 blue:112/255.0 alpha:1]//暗亮黄
#define SDK_COLOR_C033   [UIColor colorWithRed:242/255.0 green:197/255.0 blue:0/255.0 alpha:1]//金隅黄
#define SDK_COLOR_C034   [UIColor colorWithRed:214/255.0 green:153/255.0 blue:0/255.0 alpha:1]//点击金隅黄
#define SDK_COLOR_C035   [UIColor colorWithRed:206/255.0 green:136/255.0 blue:50/255.0 alpha:1]//透黄
#define SDK_COLOR_C036   [UIColor colorWithRed:184/255.0 green:115/255.0 blue:30/255.0 alpha:1]//暗透黄
#define SDK_COLOR_C037   [UIColor colorWithRed:62/255.0 green:2/255.0 blue:2/255.0 alpha:1]//深红
#define SDK_COLOR_C038   [UIColor colorWithRed:232/255.0 green:128/255.0 blue:129/255.0 alpha:1]//亮红
#define SDK_COLOR_C039   [UIColor colorWithRed:223/255.0 green:77/255.0 blue:77/255.0 alpha:1]//暗亮红
#define SDK_COLOR_C040   [UIColor colorWithRed:209/255.0 green:0/255.0 blue:0/255.0 alpha:1]//华为红

#define SDK_COLOR_C041   [UIColor colorWithRed:190/255.0 green:0/255.0 blue:0/255.0 alpha:1]//点击华为红
#define SDK_COLOR_C042   [UIColor colorWithRed:241/255.0 green:179/255.0 blue:180/255.0 alpha:1]//透红
#define SDK_COLOR_C043   [UIColor colorWithRed:237/255.0 green:153/255.0 blue:153/255.0 alpha:1]//暗透红
#define SDK_COLOR_C044   [UIColor colorWithRed:71/255.0 green:103/255.0 blue:248/255.0 alpha:1]//道奇蓝
#define SDK_COLOR_C045   [UIColor colorWithRed:142/255.0 green:147/255.0 blue:167/255.0 alpha:1]//
#define SDK_COLOR_C046   [UIColor colorWithRed:98/255.0 green:103/255.0 blue:132/255.0 alpha:1]//
#define SDK_COLOR_C047   [UIColor colorWithRed:30/255.0 green:39/255.0 blue:78/255.0 alpha:1]//深蓝
#define SDK_COLOR_C048   [UIColor colorWithRed:21/255.0 green:26/255.0 blue:55/255.0 alpha:1]//深蓝点击
#define SDK_COLOR_C049   [UIColor colorWithRed:188/255.0 green:190/255.0 blue:202/255.0 alpha:1]//
#define SDK_COLOR_C050   [UIColor colorWithRed:166/255.0 green:169/255.0 blue:184/255.0 alpha:1]//

#define SDK_COLOR_C051   [UIColor colorWithRed:155/255.0 green:178/255.0 blue:38/255.0 alpha:1]//草绿
#define SDK_COLOR_C052   [UIColor colorWithRed:255/255.0 green:255/255.0 blue:255/255.0 alpha:0.7]//70%白
#define SDK_COLOR_C053   [UIColor colorWithRed:255/255.0 green:255/255.0 blue:255/255.0 alpha:0.3]//30%白
#define SDK_COLOR_C054   [UIColor colorWithRed:10/255.0 green:33/255.0 blue:57/255.0 alpha:1]//蓝黑
#define SDK_COLOR_C055   [UIColor colorWithRed:132/255.0 green:218/255.0 blue:249/255.0 alpha:1]//亮蓝
#define SDK_COLOR_C056   [UIColor colorWithRed:106/255.0 green:174/255.0 blue:199/255.0 alpha:1]//亮蓝点击
#define SDK_COLOR_C057   [UIColor colorWithRed:26/255.0 green:83/255.0 blue:143/255.0 alpha:1]//古蓝
#define SDK_COLOR_C058   [UIColor colorWithRed:21/255.0 green:66/255.0 blue:114/255.0 alpha:1]//古蓝点击
#define SDK_COLOR_C059   [UIColor colorWithRed:62/255.0 green:179/255.0 blue:222/255.0 alpha:1]//
#define SDK_COLOR_C060   [UIColor colorWithRed:50/255.0 green:143/255.0 blue:178/255.0 alpha:1]//

#define SDK_COLOR_C061   [UIColor colorWithRed:196/255.0 green:114/255.0 blue:50/255.0 alpha:1]//
#define SDK_COLOR_C062   [UIColor colorWithRed:145/255.0 green:173/255.0 blue:197/255.0 alpha:1]//暗透蓝
#define SDK_COLOR_C063   [UIColor colorWithRed:116/255.0 green:138/255.0 blue:158/255.0 alpha:1]//
#define SDK_COLOR_C064   [UIColor colorWithRed:145/255.0 green:173/255.0 blue:197/255.0 alpha:0.7]//70%暗透蓝
#define SDK_COLOR_C065   [UIColor colorWithRed:145/255.0 green:173/255.0 blue:197/255.0 alpha:0.3]//30%暗透蓝
#define SDK_COLOR_C066   [UIColor colorWithRed:200/255.0 green:199/255.0 blue:204/255.0 alpha:0.7]//
#define SDK_COLOR_C067   [UIColor colorWithRed:0/255.0 green:0/255.0 blue:0/255.0 alpha:0.7]//70%黑色
#define SDK_COLOR_C068   [UIColor colorWithRed:0/255.0 green:0/255.0 blue:0/255.0 alpha:0.3]//30%黑色
#define SDK_COLOR_C069   [UIColor colorWithRed:31/255.0 green:162/255.0 blue:77/255.0 alpha:0.7]//70%孔雀石绿
#define SDK_COLOR_C070   [UIColor colorWithRed:31/255.0 green:162/255.0 blue:77/255.0 alpha:0.3]//30%孔雀石绿

#define SDK_COLOR_C071   [UIColor colorWithRed:245/255.0 green:143/255.0 blue:62/255.0 alpha:0.7]//70%橙色
#define SDK_COLOR_C072   [UIColor colorWithRed:245/255.0 green:143/255.0 blue:62/255.0 alpha:0.3]//30%橙色
#define SDK_COLOR_C073   [UIColor colorWithRed:255/255.0 green:59/255.0 blue:48/255.0 alpha:0.7]//70%红绯
#define SDK_COLOR_C074   [UIColor colorWithRed:255/255.0 green:59/255.0 blue:48/255.0 alpha:0.3]//30%红绯
#define SDK_COLOR_C075   [UIColor colorWithRed:242/255.0 green:197/255.0 blue:0/255.0 alpha:0.7]//70%铬黄
#define SDK_COLOR_C076   [UIColor colorWithRed:242/255.0 green:197/255.0 blue:0/255.0 alpha:0.3]//30%铬黄
#define SDK_COLOR_C077   [UIColor colorWithRed:26/255.0 green:83/255.0 blue:143/255.0 alpha:0.7]//70%古蓝
#define SDK_COLOR_C078   [UIColor colorWithRed:26/255.0 green:83/255.0 blue:143/255.0 alpha:0.3]//30%古蓝
#define SDK_COLOR_C079   [UIColor colorWithRed:30/255.0 green:39/255.0 blue:78/255.0 alpha:0.7]//70%深蓝
#define SDK_COLOR_C080   [UIColor colorWithRed:30/255.0 green:39/255.0 blue:78/255.0 alpha:0.3]//30%深蓝

#define SDK_COLOR_C081   [UIColor colorWithRed:11/255.0 green:135/255.0 blue:217/255.0 alpha:0.7]//70%湛蓝
#define SDK_COLOR_C082   [UIColor colorWithRed:11/255.0 green:135/255.0 blue:217/255.0 alpha:0.3]//30%湛蓝
#define SDK_COLOR_C083   [UIColor colorWithRed:209/255.0 green:0/255.0 blue:0/255.0 alpha:0.7]//70%正红
#define SDK_COLOR_C084   [UIColor colorWithRed:209/255.0 green:0/255.0 blue:0/255.0 alpha:0.3]//30%正红
#define SDK_COLOR_C085   [UIColor colorWithRed:155/255.0 green:155/255.0 blue:155/255.0 alpha:0.7]//30%暗灰
#define SDK_COLOR_C086   [UIColor colorWithRed:103/255.0 green:58/255.0 blue:183/255.0 alpha:1]//紫藤
#define SDK_COLOR_C087   [UIColor colorWithRed:72/255.0 green:40/255.0 blue:128/255.0 alpha:1]
#define SDK_COLOR_C088   [UIColor colorWithRed:103/255.0 green:58/255.0 blue:183/255.0 alpha:0.7]//70%紫藤
#define SDK_COLOR_C089   [UIColor colorWithRed:103/255.0 green:58/255.0 blue:183/255.0 alpha:0.3]//30%紫藤
#define SDK_COLOR_C090   [UIColor colorWithRed:113/255.0 green:155/255.0 blue:135/255.0 alpha:1]
#define SDK_COLOR_C091   [UIColor colorWithRed:90/255.0 green:124/255.0 blue:108/255.0 alpha:1]
#define SDK_COLOR_C092   [UIColor colorWithRed:113/255.0 green:155/255.0 blue:135/255.0 alpha:0.7]
#define SDK_COLOR_C093   [UIColor colorWithRed:113/255.0 green:155/255.0 blue:135/255.0 alpha:0.3]
#define SDK_COLOR_C094   [UIColor colorWithRed:31/255.0 green:188/255.0 blue:210/255.0 alpha:1]
#define SDK_COLOR_C095   [UIColor colorWithRed:22/255.0 green:131/255.0 blue:147/255.0 alpha:1]
#define SDK_COLOR_C096   [UIColor colorWithRed:31/255.0 green:188/255.0 blue:210/255.0 alpha:0.7]
#define SDK_COLOR_C097   [UIColor colorWithRed:31/255.0 green:188/255.0 blue:210/255.0 alpha:0.3]
#define SDK_COLOR_C098   [UIColor colorWithRed:0/255.0 green:0/255.0 blue:0/255.0 alpha:0.5]
#define SDK_COLOR_C099   [UIColor colorWithRed:66/255.0 green:133/255.0 blue:244/255.0 alpha:1]
#define SDK_COLOR_C100   [UIColor colorWithRed:0/255.0 green:185/255.0 blue:239/255.0 alpha:1]//天蓝
#define SDK_COLOR_C101   [UIColor colorWithRed:0/255.0 green:129/255.0 blue:167/255.0 alpha:1]
#define SDK_COLOR_C102   [UIColor colorWithRed:0/255.0 green:185/255.0 blue:239/255.0 alpha:0.7]//70%天蓝
#define SDK_COLOR_C103   [UIColor colorWithRed:0/255.0 green:185/255.0 blue:239/255.0 alpha:0.3]//30%天蓝
#define SDK_COLOR_C104   [UIColor colorWithRed:73/255.0 green:73/255.0 blue:73/255.0 alpha:1] //
#define SDK_COLOR_C105   [UIColor colorWithRed:73/255.0 green:73/255.0 blue:73/255.0 alpha:0.7]
#define SDK_COLOR_C106   [UIColor colorWithRed:73/255.0 green:73/255.0 blue:73/255.0 alpha:0.3]
#define SDK_COLOR_C107   [UIColor colorWithRed:224/255.0 green:224/255.0 blue:224/255.0 alpha:1]

#define SDK_COLOR_C108   [UIColor colorWithRed:255/255.0 green:249/255.0 blue:228/255.0 alpha:1] //
#define SDK_COLOR_C109   [UIColor colorWithRed:207/255.0 green:211/255.0 blue:226/255.0 alpha:1]

//深灰蓝
#define SDK_COLOR_C110   [UIColor colorWithRed:37/255.0 green:55/255.0 blue:84/255.0 alpha:1]
#define SDK_COLOR_C111   [UIColor colorWithRed:26/255.0 green:38/255.0 blue:59/255.0 alpha:1]
#define SDK_COLOR_C112   [UIColor colorWithRed:37/255.0 green:55/255.0 blue:84/255.0 alpha:0.7]
#define SDK_COLOR_C113   [UIColor colorWithRed:37/255.0 green:55/255.0 blue:84/255.0 alpha:0.3]

//明蓝
#define SDK_COLOR_C114   [UIColor colorWithRed:16/255.0 green:161/255.0 blue:241/255.0 alpha:1]
#define SDK_COLOR_C115   [UIColor colorWithRed:11/255.0 green:112/255.0 blue:168/255.0 alpha:1]
#define SDK_COLOR_C116   [UIColor colorWithRed:16/255.0 green:161/255.0 blue:241/255.0 alpha:0.7]
#define SDK_COLOR_C117   [UIColor colorWithRed:16/255.0 green:161/255.0 blue:241/255.0 alpha:0.3]

#define SDK_COLOR_C118   [UIColor colorWithRed:66/255.0 green:133/255.0 blue:244/255.0 alpha:0.7]
#define SDK_COLOR_C119   [UIColor colorWithRed:66/255.0 green:133/255.0 blue:244/255.0 alpha:0.3]
#define SDK_COLOR_C120   [UIColor colorWithRed:55/255.0 green:129/255.0 blue:230/255.0 alpha:1]
#define SDK_COLOR_C121  [UIColor colorWithRed:38/255.0 green:90/255.0 blue:160/255.0 alpha:1]
#define SDK_COLOR_C122  [UIColor colorWithRed:55/255.0 green:129/255.0 blue:230/255.0 alpha:0.7]
#define SDK_COLOR_C123   [UIColor colorWithRed:55/255.0 green:129/255.0 blue:230/255.0 alpha:0.3]
#define SDK_COLOR_C124   [UIColor colorWithRed:49/255.0 green:49/255.0 blue:49/255.0 alpha:0.1]
#define SDK_COLOR_C125   [UIColor colorWithRed:219/255.0 green:165/255.0 blue:97/255.0 alpha:1]
#define SDK_COLOR_C126   [UIColor colorWithRed:152/255.0 green:115/255.0 blue:67/255.0 alpha:1]
#define SDK_COLOR_C127   [UIColor colorWithRed:219/255.0 green:165/255.0 blue:97/255.0 alpha:0.7]
#define SDK_COLOR_C128   [UIColor colorWithRed:219/255.0 green:165/255.0 blue:97/255.0 alpha:0.3]
#define SDK_COLOR_C129   [UIColor colorWithRed:45/255.0 green:92/255.0 blue:170/255.0 alpha:1]
#define SDK_COLOR_C130   [UIColor colorWithRed:74/255.0 green:216/255.0 blue:120/255.0 alpha:1]
#define SDK_COLOR_C131   [UIColor colorWithRed:51/255.0 green:150/255.0 blue:83/255.0 alpha:1]
#define SDK_COLOR_C132   [UIColor colorWithRed:74/255.0 green:216/255.0 blue:120/255.0 alpha:0.7]
#define SDK_COLOR_C133   [UIColor colorWithRed:74/255.0 green:216/255.0 blue:120/255.0 alpha:0.3]

/**-----设计规范 基础Color-----**/



/**-----设计规范 基础Font Size-----**/
//  字体大小=文字像素/2
#define SDK_FONT_9        [UIFont systemFontOfSize:9]
#define SDK_FONT_11       [UIFont systemFontOfSize:11]
#define SDK_FONT_11_BOLD  [UIFont boldSystemFontOfSize:11]
#define SDK_FONT_12       [UIFont systemFontOfSize:12]
#define SDK_FONT_12_BOLD  [UIFont boldSystemFontOfSize:12]
#define SDK_FONT_13       [UIFont systemFontOfSize:13]
#define SDK_FONT_14       [UIFont systemFontOfSize:14]
#define SDK_FONT_14_BOLD  [UIFont boldSystemFontOfSize:14]
#define SDK_FONT_16       [UIFont systemFontOfSize:16]
#define SDK_FONT_16_BOLD  [UIFont boldSystemFontOfSize:16]
#define SDK_FONT_20       [UIFont systemFontOfSize:20]
#define SDK_FONT_20_BOLD  [UIFont boldSystemFontOfSize:20]
#define SDK_FONT_25       [UIFont systemFontOfSize:25]
#define SDK_FONT_25_BOLD  [UIFont boldSystemFontOfSize:25]
#define SDK_FONT_28       [UIFont systemFontOfSize:28]
#define SDK_FONT_30       [UIFont systemFontOfSize:30]
#define SDK_FONT_40       [UIFont systemFontOfSize:40]
#define SDK_FONT_40_BOLD  [UIFont boldSystemFontOfSize:40]

/**-----设计规范 基础Font Size-----**/



/**-----设计规范 基础Layout-----**/
//间距
#define SPACING_TINY        5
#define SPACING_SMALL       8
#define SPACING_MEDIUM      10
#define SPACING_LARGE       12
#define SPACING_XL          16
#define SPACING_XXL         20
#define SPACING_XXXL        30
/**-----设计规范 基础Layout-----**/




//***********************//
//*                     *//
//*      扩充宏模块       *//
//*                     *//
//***********************//

//↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓宏的重定义请在下面对应区域进行修改↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓//
//↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓命名规则 控件名称_用途_属性 （可阅读） ↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓//

/**-----iOS 【字体大小】-----**/
#define TEXT_FONT_MICRO             SDK_FONT_9
#define TEXT_FONT_TINY              SDK_FONT_11
#define TEXT_FONT_TINY_BOLD         SDK_FONT_11_BOLD
#define TEXT_FONT_SMALL             SDK_FONT_12
#define TEXT_FONT_SMALL_BOLD        SDK_FONT_12_BOLD
#define TEXT_FONT_MEDIUM            SDK_FONT_13
#define TEXT_FONT_NORMAL            SDK_FONT_14
#define TEXT_FONT_NORMAL_BOLD       SDK_FONT_14_BOLD
#define TEXT_FONT_LARGE             SDK_FONT_16
#define TEXT_FONT_LARGE_BOLD        SDK_FONT_16_BOLD
#define TEXT_FONT_XL                SDK_FONT_20
#define TEXT_FONT_XL_BOLD           SDK_FONT_20_BOLD
#define TEXT_FONT_XXL               SDK_FONT_25
#define TEXT_FONT_XXL_BOLD          SDK_FONT_25_BOLD
#define TEXT_FONT_XXXL              SDK_FONT_28
#define TEXT_FONT_XXXXL             SDK_FONT_30
#define TEXT_FONT_HUGE              SDK_FONT_40
#define TEXT_FONT_HUGE_BOLD         SDK_FONT_40_BOLD

//文字大小对应整型值
#define TEXT_FONT_MICRO_INT         9
#define TEXT_FONT_TINY_INT          11
#define TEXT_FONT_SMALL_INT         12
#define TEXT_FONT_MEDIUM_INT        13
#define TEXT_FONT_NORMAL_INT        14
#define TEXT_FONT_LARGE_INT         16
#define TEXT_FONT_XL_INT            20
#define TEXT_FONT_XXL_INT           25
#define TEXT_FONT_XXXL_INT          28
#define TEXT_FONT_XXXXL_INT         30
#define TEXT_FONT_HUGE_INT          40

/**-----iOS 【字体大小】-----**/




/**-----iOS 【字体颜色】-----**/

//4.3.0 change：文字黑色修改为黑色（浅）

//基础文字色值
#define TEXT_COLOR_BLACK                BLACK_LIGHT_COLOR           //【文字】黑色（浅）
#define TEXT_COLOR_GRAY_DARK            GRAY_DARK_COLOR             //【文字】深灰
#define TEXT_COLOR_GRAY_LIGHT           GRAY_LIGHT_COLOR            //【文字】暗灰
#define TEXT_COLOR_GRAY_OPACITY         SDK_COLOR_C106              //【文字】灰色（30% C104）
#define TEXT_COLOR_WHITE                WHITE_COLOR                 //【文字】白色
#define TEXT_COLOR_GREEN                SDK_COLOR_C014                 //【文字】左邻绿
#define TEXT_COLOR_ORANGE               ORANGE_COLOR                //【文字】橙色
#define TEXT_COLOR_RED                  RED_COLOR                   //【文字】红色
#define TEXT_COLOR_ASSISTED             ASSISTED_COLOR              //【文字】辅助色
#define TEXT_COLOR_BLUE                 SDK_COLOR_C099              //【文字】蓝色（用于提示框按钮）


//其他文字色值
#define TEXT_COLOR_BLACK_OPACITY        BLACK_LIGHT_COLOR_OPACITY         //【文字】黑色（浅）70%不透明
#define TEXT_COLOR_BLACK_MORE_OPAQUE    BLACK_LIGHT_COLOR_MORE_OPACITY    //【文字】黑色（浅）30%不透明

#define TEXT_COLOR_WHITE_OPACITY        WHITE_COLOR_OPACITY         //【文字】白色70%不透明
#define TEXT_COLOR_WHITE_MORE_OPAQUE    WHITE_COLOR_MORE_OPACITY    //【文字】白色30%不透明
/**-----iOS 【字体颜色】-----**/



/**-----iOS【颜色标准库】-----**/
//透明色
#define CLEAR_COLOR [UIColor clearColor]


//黑色系
#define BLACK_COLOR                         SDK_COLOR_C009
#define BLACK_COLOR_OPACITY                 SDK_COLOR_C067
#define BLACK_COLOR_MORE_OPACITY            SDK_COLOR_C068

//白色系
#define WHITE_COLOR                         SDK_COLOR_C001
#define WHITE_COLOR_OPACITY                 SDK_COLOR_C052
#define WHITE_COLOR_MORE_OPACITY            SDK_COLOR_C053

//灰色系
#define GRAY_DARK_COLOR                     SDK_COLOR_C008
#define GRAY_LIGHT_COLOR                    SDK_COLOR_C007
#define GRAY_OPACITY                        SDK_COLOR_C085

//暗透蓝系
#define ASSISTED_COLOR                      SDK_COLOR_C062
#define ASSISTED_COLOR_PRESSED              SDK_COLOR_C063
#define ASSISTED_COLOR_OPACITY              SDK_COLOR_C064
#define ASSISTED_COLOR_MORE_OPACITY         SDK_COLOR_C065

//橙色系
#define ORANGE_COLOR                        SDK_COLOR_C020
#define ORANGE_COLOR_PRESSED                SDK_COLOR_C061
#define ORANGE_COLOR_OPACITY                SDK_COLOR_C071
#define ORANGE_COLOR_MORE_OPACITY           SDK_COLOR_C072

//红色系
#define RED_COLOR                           SDK_COLOR_C016
#define RED_COLOR_PRESSED                   SDK_COLOR_C017
#define RED_COLOR_OPACITY                   SDK_COLOR_C073
#define RED_COLOR_MORE_OPACITY              SDK_COLOR_C074

//亮黑色
#define BLACK_LIGHT_COLOR                   SDK_COLOR_C104
#define BLACK_LIGHT_COLOR_OPACITY           SDK_COLOR_C105
#define BLACK_LIGHT_COLOR_MORE_OPACITY      SDK_COLOR_C106


//通用功能色
#define BG_LIST_ITEM                        SDK_COLOR_C001     //按钮文字 & 背景
#define BG_NAVIGATOR                        SDK_COLOR_C002     //导航栏背景 & 状态栏背景 & 弹出界面背景
#define BG_MAIN                             SDK_COLOR_C003     //主要背景色
#define BG_ITEM_SELECTED                    SDK_COLOR_C005     //白色选中
#define BG_DIVIDER                          SDK_COLOR_C107     //导航栏分割线 & 普通按钮描边 & 分割线 & 边框

#define BG_DIVIDER_OPACITY                  SDK_COLOR_C066     //分割线70%透明度

/**-----iOS【颜色标准库】-----**/


/**-----iOS【控件背景颜色】-----**/

//UINavigationBar
#define NAV_BAR_BUTTON_TEXT_COLOR           SDK_COLOR_C008     //导航栏左右按钮文字颜色
#define NAV_BAR_BUTTON_TEXT_FONT            TEXT_FONT_LARGE

//alertView
#define ALERT_BUTTON_TITLE_COLOR            SDK_COLOR_C062     //暗透蓝

//红点颜色
#define RED_POINT_COLOR                     SDK_COLOR_C016

//分享，指导页，弹出窗口背景色，饱和度为40%的黑色
#define POPUP_WINDOW_BG_COLOR   [UIColor colorWithRed:0/255.0 green:0/255.0 blue:0/255.0 alpha:0.5]

//logo的背景颜色
#define LOGO_BG_COLOR                       SDK_COLOR_C015

//placehold字体颜色
#define TEXT_COLOR_PLACE_HOLD               SDK_COLOR_C004

//pageControl颜色
#define PAGE_DEFAULT_COLOR                  SDK_COLOR_C004
#define PAGE_CURRENT_COLOR                  SDK_COLOR_C008

//分享页码控制器颜色
#define SHARE_PAGECONTROL_BG_COLOR          SDK_COLOR_C014
/**-----iOS【控件背景颜色】-----**/





/**-----iOS【控件尺寸】-----**/
//图标大小
#define ICON_WIDTH_SMALL                     14
#define ICON_WIDTH_MEDIUM                    24
#define ICON_WIDTH_LARGE                     35
#define ICON_WIDTH_LARGE_XX                  44
#define ICON_WIDTH_LARGE_XXX                 66

//图像圆角
#define IMAGE_CORNER_RADIUS                  4
//按钮圆角半径
#define BUTTON_CORNER_RADIUS                 4


//头像尺寸
#define HEAD_SIZE_MIN                        32        //头像尺寸,小
#define HEAD_SIZE_MED                        35        //头像尺寸,中
#define HEAD_SIZE_MAX                        64        //头像尺寸,适用我大头像

//Label的高度
#define LABEL_HEIGHT_TINY                    20
#define LABEL_HEIGHT_SMALL                   30
#define LABEL_HEIGHT_LARGE                   60

//导航栏
#define NAV_BAR_HEIGHT                       44
#define NAV_BUTTON_HEIGHT_DEFAULT            44

//搜索栏
#define SEARCHBAR_BACKGROUND_HEIGHT          44      //控件背景高度
#define SEARCHBAR_INPUT_HEIGHT               28      //搜索框高度
#define SEARCHBAR_EDGING                     0.5     //搜索框边框大小

//头像在左侧的Cell高度
#define TABLE_CELL_HEIGHT_SMALL              40 //无头像表格
#define TABLE_CELL_HEIGHT_MEDIUM             55 //有头像但没有detailtext
#define TABLE_CELL_HEIGHT_LARGE              60 //有头像，detailtext
#define TABLE_CELL_AVATOR_WIDTH              60 //头像
//cell 高度
#define TABLE_CELL_HEIGHT_DEFAULT            44
#define TABLE_CELL_HEIGHT_LARGER             80//右侧显示家庭或个人头像的cell
//分割线的高度
#define SEPARATE_LINE_HEIGHT_DEFAULT        (0.5)
#define TABLE_CELL_SEG_X                     0
#define TABLE_CELL_SEG_H                    SEPARATE_LINE_HEIGHT_DEFAULT

//borderWidth
#define BORDER_WIDTH                        (1)

//分割线 宽度
#define WIDTH_SEPARATE_LINE_TINY            (0.5)
#define WIDTH_SEPARATE_LINE_NORMAL          (1)

//Tab Bar
#define TAB_BAR_HEIGHT                       49
#define TAB_BAR_WITH_SHADOW_HEIGHT           (49+3.5)

//ActionSheet
#define ACTIONSHEET_BUTTON_HEIGHT            44              //actionsheet中按键高

//底视图的默认高度
#define FOOT_VIEW_HEIGHT_DEFAULT            (44)


//文字描述的宽度
#define WORD_PORTRAIT_WIDTH_BIG             (60)
#define WORD_PORTRAIT_WIDTH_SMALL           (32)

//红点尺寸
#define RED_POINT_WIDTH                     (10)
/**-----iOS【控件尺寸】-----**/





/**-----iOS【控件布局】-----**/
//外边距的大小
#define MARGIN_SUPER_TINY                   SPACING_SMALL
#define MARGIN_DOUBLE_TINY                  SPACING_MEDIUM
#define MARGIN_TINY                         SPACING_LARGE
#define MARGIN_DOUBLE_SMALL                 SPACING_XL
#define MARGIN_SMALL                        SPACING_XXL
#define MARGIN_MIDDLE                       SPACING_XXXL

//内边距
#define PADDING_SUPER_SUPER_TINY            SPACING_TINY
#define PADDING_SUPER_TINY                  SPACING_SMALL
#define PADDING_DOUBLE_TINY                 SPACING_MEDIUM
#define PADDING_TINY                        SPACING_LARGE
#define PADDING_DOUBLE_SMALL                SPACING_XL
#define PADDING_SMALL                       SPACING_XXL
#define PADDING_MIDDLE                      SPACING_XXXL


//间距的高度
#define GAP_SUPER_SUPER_TINY                SPACING_TINY
#define GAP_SUPER_TINY                      SPACING_SMALL
#define GAP_DOUBLE_TINY                     SPACING_MEDIUM
#define GAP_TINY                            SPACING_LARGE
#define GAP_DOUBLE_SMALL                    SPACING_XL
#define GAP_SMALL                           SPACING_XXL
#define GAP_MIDDLE                          SPACING_XXXL

//左侧有文字的搜索栏
#define SEARCHBAR_VERTICAL_PADDING          SPACING_SMALL    //搜索框与控件垂直内间距
#define SEARCHBAR_HORIZONTAL_PADDING_LEFT   80              //搜索框与控件左内间距
#define SEARCHBAR_HORIZONTAL_PADDING_RIGHT  SPACING_SMALL    //搜索框与控件右内间距

//Table Cell
#define TABLE_CELL_HORIZONTAL_MARGIN        SPACING_MEDIUM

//导航item之间的间隔
#define NAV_BUTTON_INTERVAL                 SPACING_SMALL

//Action Sheet
#define ACTIONSHEET_HORIZONTAL_MARGIN       SPACING_SMALL    //按键边距
#define ACTIONSHEET_VERTICAL_MARGIN         SPACING_MEDIUM    //按键垂直间距

/**
 *  服务市场
 */
#define SERVICE_COUPON_MARGIN               SPACING_SMALL

/**-----iOS【控件布局】-----**/




/**-----iOS【其他宏定义】-----**/
//输入框，字数限制
#define WORD_NUMBER_LIMIT_LARGER            (100)
#define WORD_NUMBER_LIMIT_DESCRIPTION       (20)
#define WORD_NUMBER_LIMIT_MIDDLE            (15)
#define WORD_NUMBER_LIMIT_SHORT             (10)
//设置inset
#define LeftCustomBarLeftEdge                -8
#define RightCustomBarRightEdge              -8
/**-----iOS【其他宏定义】-----**/
/**
 导航栏左右navigationBarItem余留的边距
 iPhone5s/iPhone6(iOS11) margin = 16
 iPhone6p(iOS11) margin = 20
 */
#define NavigationBarItemMargin ([UIScreen mainScreen].bounds.size.width > 375 ? 20 : 16)
#define UIColorMakeRGBA(nRed, nGreen, nBlue, nAlpha) [UIColor colorWithRed:(nRed)/255.0f \
green:(nGreen)/255.0f \
blue:(nBlue)/255.0f \
alpha:nAlpha]
#define UIColorMakeRGB(nRed, nGreen, nBlue) UIColorMakeRGBA(nRed, nGreen, nBlue, 1.0f)
#define UIColorRGB(color) UIColorMakeRGB(color>>16, (color&0x00ff00)>>8,color&0x0000ff)

#endif /* PopDesign_h */
