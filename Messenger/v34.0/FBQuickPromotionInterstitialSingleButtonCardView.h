/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBQuickPromotionInterstitialCardView.h>

@class UIButton;

@interface FBQuickPromotionInterstitialSingleButtonCardView : FBQuickPromotionInterstitialCardView {

	UIButton* _primaryButton;

}
-(id)primaryButton;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(CGSize)buttonBarSizeForCardBounds:(CGRect)arg1 ;
-(void)layoutButtonItemsForInterstitialSize:(CGSize)arg1 cardBounds:(CGRect)arg2 ;
-(id)configuration;
@end

