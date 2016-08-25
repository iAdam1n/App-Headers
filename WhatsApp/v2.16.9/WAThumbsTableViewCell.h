/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol WAThumbsTableViewCellDelegate;
@class NSMutableArray, NSBlockOperation, NSMutableSet, NSArray;

@interface WAThumbsTableViewCell : UITableViewCell {

	NSMutableArray* _thumbnailViews;
	NSBlockOperation* _thumbnailLoadingOp;
	NSMutableArray* _thumbnails;
	long long _loadingID;
	NSMutableSet* _selectedIndexes;
	id<WAThumbsTableViewCellDelegate> _delegate;
	long long _thumbnailCount;

}

@property (assign,nonatomic,__weak) id<WAThumbsTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long thumbnailCount;                                     //@synthesize thumbnailCount=_thumbnailCount - In the implementation block
@property (nonatomic,readonly) NSArray * thumbnailViews;                                     //@synthesize thumbnailViews=_thumbnailViews - In the implementation block
+(long long)thumbnailCountForRowOfWidth:(double)arg1 ;
-(void)loadThumbnailsForMessages:(id)arg1 inQueue:(id)arg2 ;
-(void)setSelectedIndexes:(id)arg1 ;
-(void)setThumbnailState:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)cancelThumbnailLoading;
-(void)loadThumbnailsForMessages:(id)arg1 loadingID:(long long)arg2 inOperation:(id)arg3 ;
-(unsigned long long)thumbnailStateAtIndex:(unsigned long long)arg1 ;
-(long long)thumbnailCount;
-(NSArray *)thumbnailViews;
-(void)setDelegate:(id<WAThumbsTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<WAThumbsTableViewCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)setThumbnails:(id)arg1 ;
-(void)cellTapped:(id)arg1 ;
-(void)refreshSelectionState;
@end

