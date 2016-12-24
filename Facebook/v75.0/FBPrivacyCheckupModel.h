/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMemPrivacyCheckupItem, FBPrivacySettingComposingSet, NSArray;

@interface FBPrivacyCheckupModel : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _fBPrivacyCheckupModelExplanation_explanation;
	NSString* _fBPrivacyCheckupModelHeader_header;
	BOOL _fBPrivacyCheckupModelHeader_showTopDivider;
	NSString* _fBPrivacyCheckupModelFooter_footer;
	unsigned long long _fBPrivacyCheckupModelFooter_loadingState;
	unsigned long long _fBPrivacyCheckupModelProgressBar_totalSteps;
	unsigned long long _fBPrivacyCheckupModelProgressBar_completedSteps;
	FBMemPrivacyCheckupItem* _fBPrivacyCheckupModelPlaceholderCell_infoItem;
	FBPrivacySettingComposingSet* _fBPrivacyCheckupModelPrivacyCell_composingSet;
	FBMemPrivacyCheckupItem* _fBPrivacyCheckupModelPrivacyCell_privacyItem;
	FBPrivacySettingComposingSet* _fBPrivacyCheckupModelAppCell_composingSet;
	FBMemPrivacyCheckupItem* _fBPrivacyCheckupModelAppCell_appItem;
	NSArray* _fBPrivacyCheckupModelAppCell_actions;

}
+(id)fBPrivacyCheckupModelHeaderWithHeader:(id)arg1 showTopDivider:(BOOL)arg2 ;
+(id)fBPrivacyCheckupModelPrivacyCellWithComposingSet:(id)arg1 privacyItem:(id)arg2 ;
+(id)fBPrivacyCheckupModelAppCellWithComposingSet:(id)arg1 appItem:(id)arg2 actions:(id)arg3 ;
+(id)fBPrivacyCheckupModelPlaceholderCellWithInfoItem:(id)arg1 ;
+(id)fBPrivacyCheckupModelFooterWithFooter:(id)arg1 loadingState:(unsigned long long)arg2 ;
+(id)fBPrivacyCheckupModelProgressBarWithTotalSteps:(unsigned long long)arg1 completedSteps:(unsigned long long)arg2 ;
+(id)fBPrivacyCheckupModelExplanationWithExplanation:(id)arg1 ;
-(void)matchFBPrivacyCheckupModelExplanation:(/*^block*/id)arg1 fBPrivacyCheckupModelHeader:(/*^block*/id)arg2 fBPrivacyCheckupModelFooter:(/*^block*/id)arg3 fBPrivacyCheckupModelProgressBar:(/*^block*/id)arg4 fBPrivacyCheckupModelPlaceholderCell:(/*^block*/id)arg5 fBPrivacyCheckupModelPrivacyCell:(/*^block*/id)arg6 fBPrivacyCheckupModelAppCell:(/*^block*/id)arg7 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
