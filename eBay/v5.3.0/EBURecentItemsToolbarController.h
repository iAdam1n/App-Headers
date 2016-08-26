/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUToolbarController.h>

@class UIButton, NSMutableArray;

@interface EBURecentItemsToolbarController : EBUToolbarController {

	UIButton* _clearButton;
	/*^block*/id _clearHandlerBlock;
	NSMutableArray* _myConstraints;

}

@property (nonatomic,retain) UIButton * clearButton;                      //@synthesize clearButton=_clearButton - In the implementation block
@property (nonatomic,retain) NSMutableArray * myConstraints;              //@synthesize myConstraints=_myConstraints - In the implementation block
@property (nonatomic,copy) id clearHandlerBlock;                          //@synthesize clearHandlerBlock=_clearHandlerBlock - In the implementation block
-(BOOL)shouldShowEditButton;
-(void)configureBar;
-(void)clearButtonAction:(id)arg1 ;
-(void)updateLayoutConstraints;
-(void)editingWillStart;
-(void)editingDidFinish;
-(id)dataSectionSelectorTitle;
-(void)setClearButton:(UIButton *)arg1 ;
-(id)clearHandlerBlock;
-(void)setClearHandlerBlock:(id)arg1 ;
-(NSMutableArray *)myConstraints;
-(void)setMyConstraints:(NSMutableArray *)arg1 ;
-(void)viewDidLoad;
-(UIButton *)clearButton;
@end
