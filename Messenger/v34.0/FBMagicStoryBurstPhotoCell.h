/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBMagicStoryDraggableCell.h>
#import <Messenger/FBMagicStoryPlayableCell.h>

@protocol FBMagicStoryBurstPhotoCellDelegate;
@class NSString;

@interface FBMagicStoryBurstPhotoCell : FBMagicStoryDraggableCell <FBMagicStoryPlayableCell> {

	BOOL _bestFrameModeEnabled;
	id<FBMagicStoryBurstPhotoCellDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL bestFrameModeEnabled;                                         //@synthesize bestFrameModeEnabled=_bestFrameModeEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long currentImageIndex; 
@property (assign,nonatomic,__weak) id<FBMagicStoryBurstPhotoCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)bestFrameModeEnabled;
-(void)configureWithAssets:(id)arg1 session:(id)arg2 ;
-(unsigned long long)currentImageIndex;
-(id)makeAssetView;
-(BOOL)canBePlayed;
-(void)setBestFrame:(unsigned long long)arg1 ;
-(void)play;
-(void)setDelegate:(id<FBMagicStoryBurstPhotoCellDelegate>)arg1 ;
-(id<FBMagicStoryBurstPhotoCellDelegate>)delegate;
-(void)pause;
@end

