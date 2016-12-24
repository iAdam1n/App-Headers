/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface FBBrowserLayoutSearchBoxConfig : NSObject <NSCopying> {

	unsigned long long _subtype;
	UIColor* _tappableSearchBox_normalFill;
	UIColor* _tappableSearchBox_pressedFill;
	UIColor* _tappableSearchBox_tint;
	UIColor* _tappableSearchBox_accessoryTint;
	BOOL _tappableSearchBox_hasRightAccessory;
	UIColor* _nontappableSearchBox_fill;
	UIColor* _nontappableSearchBox_tint;
	UIColor* _nontappableSearchBox_accessoryTint;
	BOOL _nontappableSearchBox_hasRightAccessory;

}
+(id)tappableSearchBoxWithNormalFill:(id)arg1 pressedFill:(id)arg2 tint:(id)arg3 accessoryTint:(id)arg4 hasRightAccessory:(BOOL)arg5 ;
+(id)nontappableSearchBoxWithFill:(id)arg1 tint:(id)arg2 accessoryTint:(id)arg3 hasRightAccessory:(BOOL)arg4 ;
-(void)matchTappableSearchBox:(/*^block*/id)arg1 nontappableSearchBox:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
