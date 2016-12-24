/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class MNBookingRequestsDetailFooterView, FBNetworkImageView, UITableView;

@interface MNPSLegacyConsumerAppointmentDetailView : UIView {

	MNBookingRequestsDetailFooterView* _buttonView;
	FBNetworkImageView* _imageView;
	UITableView* _tableView;

}
-(void)_addImageViewWithImageURL:(id)arg1 imageDownloader:(id)arg2 ;
-(void)_addTableViewWithDataSource:(id)arg1 delegate:(id)arg2 ;
-(void)_addButtonViewWithDelegate:(id)arg1 cancelButtonVisible:(BOOL)arg2 ;
-(id)initWithImageURL:(id)arg1 imageDownloader:(id)arg2 tableViewDataSource:(id)arg3 tableViewDelegate:(id)arg4 buttonDelegate:(id)arg5 cancelButtonVisible:(BOOL)arg6 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
