/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/SellingDetailController_TableView.h>

@class UIView, UILabel, EBUListingItemDescriptionEditor, EBUSellingTextViewCell, SegmentedControl;

@interface SellingDetailController_Description : SellingDetailController_TableView {

	UIView* _dictationPromptContainer;
	UILabel* _dictationPrompt;
	EBUListingItemDescriptionEditor* _descriptionEditor;
	EBUSellingTextViewCell* _descriptionEditorCell;
	SegmentedControl* _editControl;
	UIView* _headerView;

}

@property (nonatomic,retain) UIView * dictationPromptContainer;                                //@synthesize dictationPromptContainer=_dictationPromptContainer - In the implementation block
@property (nonatomic,retain) UILabel * dictationPrompt;                                        //@synthesize dictationPrompt=_dictationPrompt - In the implementation block
@property (nonatomic,retain) EBUListingItemDescriptionEditor * descriptionEditor;              //@synthesize descriptionEditor=_descriptionEditor - In the implementation block
@property (nonatomic,retain) EBUSellingTextViewCell * descriptionEditorCell;                   //@synthesize descriptionEditorCell=_descriptionEditorCell - In the implementation block
@property (nonatomic,retain) SegmentedControl * editControl;                                   //@synthesize editControl=_editControl - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                              //@synthesize headerView=_headerView - In the implementation block
-(void)setupTableCells;
-(void)adjustKeyboardDidHide:(id)arg1 ;
-(void)saveToListing;
-(id)viewToRevealUponKeyboardShow;
-(void)setupDescriptionEditorCellHeightForOrientation:(long long)arg1 ;
-(void)editControlAction:(id)arg1 ;
-(UIView *)dictationPromptContainer;
-(void)setDictationPromptContainer:(UIView *)arg1 ;
-(UILabel *)dictationPrompt;
-(void)setDictationPrompt:(UILabel *)arg1 ;
-(EBUListingItemDescriptionEditor *)descriptionEditor;
-(void)setDescriptionEditor:(EBUListingItemDescriptionEditor *)arg1 ;
-(EBUSellingTextViewCell *)descriptionEditorCell;
-(void)setDescriptionEditorCell:(EBUSellingTextViewCell *)arg1 ;
-(SegmentedControl *)editControl;
-(void)setEditControl:(SegmentedControl *)arg1 ;
-(void)scrollRectToVisible:(CGRect)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
@end

