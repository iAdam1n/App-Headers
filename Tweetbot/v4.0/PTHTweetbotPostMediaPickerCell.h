/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:47 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView, PHAsset, PTHTweetbotPostDraftMedium, _PTHTweetbotPostAssetsPickerCellSelectionOverlay;

@interface PTHTweetbotPostMediaPickerCell : UICollectionViewCell {

	UIImageView* _playImageView;
	BOOL _enabled;
	BOOL _reallySelected;
	PHAsset* _asset;
	PTHTweetbotPostDraftMedium* _medium;
	UIImageView* _imageView;
	_PTHTweetbotPostAssetsPickerCellSelectionOverlay* _selectionOverlay;

}

@property (nonatomic,retain) PHAsset * asset;                                                                    //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) PTHTweetbotPostDraftMedium * medium;                                                //@synthesize medium=_medium - In the implementation block
@property (assign,nonatomic) long long index; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isReallySelected,nonatomic) BOOL reallySelected;                                        //@synthesize reallySelected=_reallySelected - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                                                          //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) _PTHTweetbotPostAssetsPickerCellSelectionOverlay * selectionOverlay;              //@synthesize selectionOverlay=_selectionOverlay - In the implementation block
-(void)setMedium:(PTHTweetbotPostDraftMedium *)arg1 ;
-(void)setReallySelected:(BOOL)arg1 ;
-(BOOL)isReallySelected;
-(_PTHTweetbotPostAssetsPickerCellSelectionOverlay *)selectionOverlay;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(UIImageView *)imageView;
-(long long)index;
-(PHAsset *)asset;
-(void)setAsset:(PHAsset *)arg1 ;
-(void)setIndex:(long long)arg1 ;
-(PTHTweetbotPostDraftMedium *)medium;
@end

