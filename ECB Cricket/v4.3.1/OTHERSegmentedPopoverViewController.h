/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UITableViewDelegate.h>

@protocol OTHERSegmentedPopoverViewControllerDelegate;
@class OTHERSegmentedPopoverControl, NSArray, UIColor, UIFont, UITapGestureRecognizer, UIView, UITableView, NSString;

@interface OTHERSegmentedPopoverViewController : UIViewController <UITableViewDataSource, UIGestureRecognizerDelegate, UITableViewDelegate> {

	OTHERSegmentedPopoverControl* _segmentedPopoverControl;
	id<OTHERSegmentedPopoverViewControllerDelegate> _delegate;
	NSArray* _popoverItems;
	NSArray* _popoverItemStates;
	long long _selectedSegmentIndex;
	UIColor* _selectionColor;
	UIFont* _font;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIView* _arrowView;
	UIView* _containerView;
	UITableView* _selectionsTableView;

}

@property (assign,nonatomic,__weak) OTHERSegmentedPopoverControl * segmentedPopoverControl;                //@synthesize segmentedPopoverControl=_segmentedPopoverControl - In the implementation block
@property (assign,nonatomic,__weak) id<OTHERSegmentedPopoverViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * popoverItems;                                                       //@synthesize popoverItems=_popoverItems - In the implementation block
@property (nonatomic,retain) NSArray * popoverItemStates;                                                  //@synthesize popoverItemStates=_popoverItemStates - In the implementation block
@property (assign,nonatomic) long long selectedSegmentIndex;                                               //@synthesize selectedSegmentIndex=_selectedSegmentIndex - In the implementation block
@property (nonatomic,retain) UIColor * selectionColor;                                                     //@synthesize selectionColor=_selectionColor - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                                //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapGestureRecognizer;                              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIView * arrowView;                                                         //@synthesize arrowView=_arrowView - In the implementation block
@property (nonatomic,readonly) UIView * containerView;                                                     //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) UITableView * selectionsTableView;                                          //@synthesize selectionsTableView=_selectionsTableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)arrowView;
-(UITableView *)selectionsTableView;
-(void)handleTapGesture:(id)arg1 ;
-(NSArray *)popoverItems;
-(OTHERSegmentedPopoverControl *)segmentedPopoverControl;
-(void)dismissPopoverWithSegmentIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(NSArray *)popoverItemStates;
-(void)setPopoverItems:(NSArray *)arg1 ;
-(void)setPopoverItemStates:(NSArray *)arg1 ;
-(void)setSegmentedPopoverControl:(OTHERSegmentedPopoverControl *)arg1 ;
-(void)setDelegate:(id<OTHERSegmentedPopoverViewControllerDelegate>)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<OTHERSegmentedPopoverViewControllerDelegate>)delegate;
-(UIView *)containerView;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)viewDidLayoutSubviews;
-(UIFont *)font;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(void)setSelectedSegmentIndex:(long long)arg1 ;
-(long long)selectedSegmentIndex;
-(void)presentPopoverAnimated:(BOOL)arg1 ;
-(UIColor *)selectionColor;
-(void)setSelectionColor:(UIColor *)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
@end

