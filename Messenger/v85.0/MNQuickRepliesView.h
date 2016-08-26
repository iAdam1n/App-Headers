/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIScrollView.h>
#import <Messenger/MNQuickReplyCellDelegate.h>

@class FBUserSession, FBImageDownloader, UIImage, NSArray, NSString;

@interface MNQuickRepliesView : UIScrollView <MNQuickReplyCellDelegate> {

	FBUserSession* _session;
	FBImageDownloader* _imageDownloader;
	UIImage* _placeHolderImage;
	unsigned long long _maxNumberOfCells;
	long long _bubbleAlignment;
	NSArray* _quickReplyCells;
	double _layoutYOffset;

}

@property (nonatomic,copy,readonly) NSArray * quickReplyCells;                            //@synthesize quickReplyCells=_quickReplyCells - In the implementation block
@property (assign) double layoutYOffset;                                                  //@synthesize layoutYOffset=_layoutYOffset - In the implementation block
@property (assign,nonatomic,__weak) id<MNQuickRepliesViewDelegate> delegate; 
@property (assign,nonatomic) long long bubbleAlignment;                                   //@synthesize bubbleAlignment=_bubbleAlignment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBubbleAlignment:(long long)arg1 ;
-(void)setLayoutYOffset:(double)arg1 ;
-(unsigned long long)numberOfQuickReplies;
-(NSArray *)quickReplyCells;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 maxNumberOfCells:(unsigned long long)arg3 ;
-(long long)bubbleAlignment;
-(void)didSelectQuickReplyCell:(id)arg1 ;
-(void)_initializeQuickReplyCellArrayIfNeeded;
-(CGSize)_sizeForCellAtIndex:(int)arg1 ;
-(double)layoutYOffset;
-(void)reloadData;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
