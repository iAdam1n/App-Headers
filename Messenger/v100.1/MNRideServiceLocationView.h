/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNBusinessView.h>

@class UIImageView, MNBusinessLabelView, MNRideServiceLocationViewModel, NSString;

@interface MNRideServiceLocationView : UIView <MNBusinessView> {

	UIImageView* _imageView;
	MNBusinessLabelView* _textLabel;
	MNRideServiceLocationViewModel* _viewModel;

}

@property (nonatomic,copy) MNRideServiceLocationViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MNRideServiceLocationViewModel *)viewModel;
-(void)setViewModel:(MNRideServiceLocationViewModel *)arg1 ;
@end
