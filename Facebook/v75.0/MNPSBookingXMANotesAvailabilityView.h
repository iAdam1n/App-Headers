/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBProfServicesBookingDataModel, MNPSBookingSharedNotesView, MNPSBookingSharedHeaderView, NSArray;

@interface MNPSBookingXMANotesAvailabilityView : UIView {

	FBProfServicesBookingDataModel* _viewModel;
	MNPSBookingSharedNotesView* _topNotesView;
	MNPSBookingSharedNotesView* _bottomNotesView;
	MNPSBookingSharedHeaderView* _headerView;
	NSArray* _ctaViews;
	BOOL _actsAsAdmin;

}
+(CGSize)sizeThatFits:(CGSize)arg1 viewModel:(id)arg2 actsAsAdmin:(BOOL)arg3 ;
-(id)initWithViewModel:(id)arg1 actsAsAdmin:(BOOL)arg2 delegate:(id)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
