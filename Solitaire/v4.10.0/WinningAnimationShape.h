/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/WinningAnimationPath.h>

@interface WinningAnimationShape : WinningAnimationPath {

	int sideCount;
	int skipCount;

}
-(id)initWithFrame:(CGRect)arg1 andCardFrame:(CGRect)arg2 sides:(int)arg3 skips:(int)arg4 ;
-(void)firstUpdate;
@end
