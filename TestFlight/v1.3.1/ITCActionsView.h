/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 2:43:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/46284644-CFA2-4927-9DCF-D060DC60B9C7/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIActionSheetDelegate.h>

@class CALayer, ITCCollectionViewCell, NSArray, NSString;

@interface ITCActionsView : UIView <UIActionSheetDelegate> {

	double _visibleWidth;
	CALayer* _maskLayer;
	ITCCollectionViewCell* _cell;
	NSArray* _editActionConstraints;
	NSArray* _actionButtons;

}

@property (assign,nonatomic) double visibleWidth;                              //@synthesize visibleWidth=_visibleWidth - In the implementation block
@property (nonatomic,retain) CALayer * maskLayer;                              //@synthesize maskLayer=_maskLayer - In the implementation block
@property (assign,nonatomic,__weak) ITCCollectionViewCell * cell;              //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) NSArray * editActionConstraints;                  //@synthesize editActionConstraints=_editActionConstraints - In the implementation block
@property (nonatomic,retain) NSArray * actionButtons;                          //@synthesize actionButtons=_actionButtons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVisibleWidth:(double)arg1 ;
-(ITCCollectionViewCell *)cell;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(void)setCell:(ITCCollectionViewCell *)arg1 ;
-(double)visibleWidth;
-(void)didTouchEditAction:(id)arg1 ;
-(void)didTouchMoreEditAction:(id)arg1 ;
-(void)setActionButtons:(NSArray *)arg1 ;
-(void)setEditActionConstraints:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 cell:(id)arg2 ;
-(void)prepareActionButtons;
-(CALayer *)maskLayer;
-(void)setMaskLayer:(CALayer *)arg1 ;
-(NSArray *)editActionConstraints;
-(NSArray *)actionButtons;
@end
