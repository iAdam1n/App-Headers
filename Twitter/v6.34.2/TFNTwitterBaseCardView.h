/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNLayoutableView.h>
#import <Twitter/TFNTwitterCardView.h>

@protocol TFNTwitterCardViewDelegate, TFNTwitterBaseCardViewUpdater;
@class TFNTwitterCardContext, UIView;

@interface TFNTwitterBaseCardView : TFNLayoutableView <TFNTwitterCardView> {

	TFNTwitterCardContext* _cardContext;
	id<TFNTwitterCardViewDelegate> _delegate;
	id<TFNTwitterBaseCardViewUpdater> _updaterDelegate;

}

@property (assign,nonatomic,__weak) id<TFNTwitterBaseCardViewUpdater> updaterDelegate;                //@synthesize updaterDelegate=_updaterDelegate - In the implementation block
@property (nonatomic,readonly) TFNTwitterCardContext * cardContext;                                   //@synthesize cardContext=_cardContext - In the implementation block
@property (nonatomic,retain) id layoutState; 
@property (assign,nonatomic,__weak) id<TFNTwitterCardViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<TFNTwitterCardViewLayoutDelegate> layoutDelegate; 
@property (nonatomic,readonly) UIView * previewImageView; 
-(void)setUpdaterDelegate:(id<TFNTwitterBaseCardViewUpdater>)arg1 ;
-(TFNTwitterCardContext *)cardContext;
-(void)setCardContext:(TFNTwitterCardContext *)arg1 ;
-(id<TFNTwitterBaseCardViewUpdater>)updaterDelegate;
-(void)setDelegate:(id<TFNTwitterCardViewDelegate>)arg1 ;
-(id<TFNTwitterCardViewDelegate>)delegate;
-(void)prepareForReuse;
@end

