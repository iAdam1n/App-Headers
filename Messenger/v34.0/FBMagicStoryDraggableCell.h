/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Messenger/FBMagicStoryCellProtocol.h>

@protocol FBMagicStoryAssetViewProtocol, FBMagicStoryDraggableCellDelegate;
@class UIButton, NSArray, FBUserSession, UIView, NSString;

@interface FBMagicStoryDraggableCell : UICollectionViewCell <FBMagicStoryCellProtocol> {

	UIButton* _hideButton;
	NSArray* _assets;
	FBUserSession* _session;
	BOOL _beingDragged;
	UIView*<FBMagicStoryAssetViewProtocol> _assetView;
	id<FBMagicStoryDraggableCellDelegate> _draggableCellDelegate;

}

@property (nonatomic,retain) UIView*<FBMagicStoryAssetViewProtocol> assetView;                                //@synthesize assetView=_assetView - In the implementation block
@property (assign,nonatomic) BOOL beingDragged;                                                               //@synthesize beingDragged=_beingDragged - In the implementation block
@property (assign,nonatomic,__weak) id<FBMagicStoryDraggableCellDelegate> draggableCellDelegate;              //@synthesize draggableCellDelegate=_draggableCellDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithAssets:(id)arg1 session:(id)arg2 ;
-(id)copyAndHideAssetView;
-(void)unhideAssetView;
-(UIView*<FBMagicStoryAssetViewProtocol>)assetView;
-(id)makeAssetView;
-(void)setCloseButtonShown:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)didTapHideButton;
-(void)setHoveredOver:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setButtonFrame;
-(void)setShrink:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)removeAnimated:(BOOL)arg1 ;
-(CGRect)getAssetFrameIn:(id)arg1 ;
-(void)setAssetView:(UIView*<FBMagicStoryAssetViewProtocol>)arg1 ;
-(BOOL)beingDragged;
-(void)setBeingDragged:(BOOL)arg1 ;
-(id<FBMagicStoryDraggableCellDelegate>)draggableCellDelegate;
-(void)setDraggableCellDelegate:(id<FBMagicStoryDraggableCellDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
@end

