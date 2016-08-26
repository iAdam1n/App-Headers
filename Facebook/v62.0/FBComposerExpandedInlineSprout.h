/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBComposerSprout, FBComposerInlineSproutNewFeatureUpsell, FBComposerInlineSproutBottomDesign;

@interface FBComposerExpandedInlineSprout : FBValueObject <NSCopying> {

	BOOL _allowInclusionOfIconInCollapsedState;
	BOOL _requiresDisplayOfCollapsedState;
	FBComposerSprout* _sprout;
	FBComposerInlineSproutNewFeatureUpsell* _upsell;
	FBComposerInlineSproutBottomDesign* _bottomDesign;

}

@property (nonatomic,copy,readonly) FBComposerSprout * sprout;                                      //@synthesize sprout=_sprout - In the implementation block
@property (nonatomic,readonly) BOOL allowInclusionOfIconInCollapsedState;                           //@synthesize allowInclusionOfIconInCollapsedState=_allowInclusionOfIconInCollapsedState - In the implementation block
@property (nonatomic,readonly) BOOL requiresDisplayOfCollapsedState;                                //@synthesize requiresDisplayOfCollapsedState=_requiresDisplayOfCollapsedState - In the implementation block
@property (nonatomic,copy,readonly) FBComposerInlineSproutNewFeatureUpsell * upsell;                //@synthesize upsell=_upsell - In the implementation block
@property (nonatomic,copy,readonly) FBComposerInlineSproutBottomDesign * bottomDesign;              //@synthesize bottomDesign=_bottomDesign - In the implementation block
-(FBComposerInlineSproutNewFeatureUpsell *)upsell;
-(BOOL)requiresDisplayOfCollapsedState;
-(BOOL)allowInclusionOfIconInCollapsedState;
-(FBComposerSprout *)sprout;
-(FBComposerInlineSproutBottomDesign *)bottomDesign;
-(id)initWithSprout:(id)arg1 allowInclusionOfIconInCollapsedState:(BOOL)arg2 requiresDisplayOfCollapsedState:(BOOL)arg3 upsell:(id)arg4 bottomDesign:(id)arg5 ;
@end
