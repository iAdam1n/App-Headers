/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <UIKit/UITableView.h>

@interface JMOutlineTableView : UITableView {

	BOOL _jm_isAdjustingFrame;
	BOOL _jm_isAdjustingContentInset;
	BOOL _jm_isRemovingFromSuperview;

}

@property (assign) BOOL jm_isAdjustingFrame;                     //@synthesize jm_isAdjustingFrame=_jm_isAdjustingFrame - In the implementation block
@property (assign) BOOL jm_isAdjustingContentInset;              //@synthesize jm_isAdjustingContentInset=_jm_isAdjustingContentInset - In the implementation block
@property (assign) BOOL jm_isRemovingFromSuperview;              //@synthesize jm_isRemovingFromSuperview=_jm_isRemovingFromSuperview - In the implementation block
-(id)jm_dequeueReusableCellWithIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(void)setJm_isAdjustingFrame:(BOOL)arg1 ;
-(void)setJm_isAdjustingContentInset:(BOOL)arg1 ;
-(BOOL)jm_isAdjustingFrame;
-(BOOL)jm_isAdjustingContentInset;
-(BOOL)jm_isRemovingFromSuperview;
-(void)setJm_isRemovingFromSuperview:(BOOL)arg1 ;
-(void)jm_setDelegate:(id)arg1 ;
-(id)jm_delegate;
-(void)jm_setDataSource:(id)arg1 ;
-(id)jm_dataSource;
-(void)jm_reloadData;
-(CGRect)jm_rectForRowAtIndexPath:(id)arg1 ;
-(id)jm_indexPathForRowAtPoint:(CGPoint)arg1 ;
-(id)jm_indexPathForCell:(id)arg1 ;
-(id)jm_indexPathsForRowsInRect:(CGRect)arg1 ;
-(id)jm_cellForRowAtIndexPath:(id)arg1 ;
-(id)jm_visibleCells;
-(id)jm_indexPathsForVisibleRows;
-(void)jm_scrollToRowAtIndexPath:(id)arg1 atScrollPosition:(long long)arg2 animated:(BOOL)arg3 ;
-(void)jm_beginUpdates;
-(void)jm_endUpdates;
-(void)jm_insertSections:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)jm_deleteSections:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)jm_reloadSections:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)jm_moveSection:(long long)arg1 toSection:(long long)arg2 ;
-(void)jm_insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)jm_deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)jm_reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)jm_moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(id)jm_indexPathForSelectedRow;
-(id)jm_indexPathsForSelectedRows;
-(void)jm_selectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3 ;
-(void)jm_deselectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
@end

