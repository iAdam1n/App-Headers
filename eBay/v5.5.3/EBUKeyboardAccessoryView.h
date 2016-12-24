/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIView.h>

@protocol EBUKeyboardAccessoryViewDelegate;
@class NSArray, UIResponder, UIToolbar, UIBarButtonItem;

@interface EBUKeyboardAccessoryView : UIView {

	BOOL _hidePreviousNext;
	id<EBUKeyboardAccessoryViewDelegate> _delegate;
	NSArray* _allResponders;
	UIResponder* _activeResponder;
	UIToolbar* _accessoryView;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _nextButton;
	UIBarButtonItem* _previousButton;

}

@property (nonatomic,retain) UIToolbar * accessoryView;                                         //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                      //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * nextButton;                                      //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * previousButton;                                  //@synthesize previousButton=_previousButton - In the implementation block
@property (assign,nonatomic,__weak) id<EBUKeyboardAccessoryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * allResponders;                                           //@synthesize allResponders=_allResponders - In the implementation block
@property (nonatomic,retain) UIResponder * activeResponder;                                     //@synthesize activeResponder=_activeResponder - In the implementation block
@property (assign,nonatomic) BOOL hidePreviousNext;                                             //@synthesize hidePreviousNext=_hidePreviousNext - In the implementation block
-(void)defaultPreviousNextButtons;
-(void)setHidePreviousNext:(BOOL)arg1 ;
-(UIResponder *)activeResponder;
-(void)setActiveResponder:(UIResponder *)arg1 ;
-(UIBarButtonItem *)previousButton;
-(id)flexibleSpaceButton;
-(void)updatePreviousNextButtons;
-(BOOL)hidePreviousNext;
-(NSArray *)allResponders;
-(void)updatePreviousButton:(BOOL)arg1 ;
-(void)updateNextButton:(BOOL)arg1 ;
-(void)setAllResponders:(NSArray *)arg1 ;
-(void)setPreviousButton:(UIBarButtonItem *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<EBUKeyboardAccessoryViewDelegate>)arg1 ;
-(id<EBUKeyboardAccessoryViewDelegate>)delegate;
-(id)items;
-(void)setItems:(id)arg1 ;
-(UIToolbar *)accessoryView;
-(void)setAccessoryView:(UIToolbar *)arg1 ;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(void)done:(id)arg1 ;
-(UIBarButtonItem *)nextButton;
-(void)setNextButton:(UIBarButtonItem *)arg1 ;
-(void)previous:(id)arg1 ;
-(void)next:(id)arg1 ;
@end
