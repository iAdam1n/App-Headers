/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMemPageCardCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Facebook/FBPageCardProtocol.h>

@protocol FBMemPagePlacesAboutPageInfoCardCellDelegateFBLongTextExpandableViewDelegate;
@class FBPageStackingView, FBMemPageInfoSection, NSDictionary, NSMutableArray, NSString;

@interface FBMemPagePlacesAboutPageInfoCardCell : FBMemPageCardCell <UIGestureRecognizerDelegate, FBPageCardProtocol> {

	FBPageStackingView* _stackingView;
	FBMemPageInfoSection* _pageInfoSection;
	NSDictionary* _knownStyles;
	NSMutableArray* _tapGestureRecognizers;
	NSMutableArray* _longTextViews;
	NSMutableArray* _shortTextViews;
	id<FBMemPagePlacesAboutPageInfoCardCellDelegate><FBLongTextExpandableViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMemPagePlacesAboutPageInfoCardCellDelegate><FBLongTextExpandableViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCardStyle:(unsigned long long)arg1 backgroundColor:(id)arg2 showBorder:(BOOL)arg3 ;
-(id)_decoratedTextForAttributedString:(id)arg1 ;
-(id)_createLongTextViewWithField:(id)arg1 ;
-(id)_captureLongTextExpandableViewFromView:(id)arg1 ;
-(void)setDelegate:(id<FBMemPagePlacesAboutPageInfoCardCellDelegate><FBLongTextExpandableViewDelegate>)arg1 ;
-(void)dealloc;
-(id<FBMemPagePlacesAboutPageInfoCardCellDelegate><FBLongTextExpandableViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_handleTapGesture:(id)arg1 ;
-(void)configureWithViewModel:(id)arg1 ;
@end
