/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/C946ECFA-6A29-41D3-8F69-02583A041494/Rummikub.app/Rummikub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Rummikub/Menu.h>

@interface Options : Menu {

	float vertices[1][8];
	float texes[1][8];
	float logoY;

}
+(int)AIStrength;
+(int)SortingOrder;
+(char)AutoSort;
+(int)TimeLimit;
+(void)setAIStrength:(int)arg1 ;
+(void)setSortingOrder:(int)arg1 ;
+(void)setAutoSort:(char)arg1 ;
+(void)setTimeLimit:(int)arg1 ;
-(void)render;
-(id)init;
@end
