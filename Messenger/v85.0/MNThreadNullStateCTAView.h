/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNBusinessStackedContainerView, MNThreadNullStateCTAViewModel;

@interface MNThreadNullStateCTAView : UIView {

	MNBusinessStackedContainerView* _contentView;
	MNThreadNullStateCTAViewModel* _viewModel;

}

@property (nonatomic,copy) MNThreadNullStateCTAViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(id)initWithImageDownloader:(id)arg1 ctaHandler:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(MNThreadNullStateCTAViewModel *)viewModel;
-(void)setViewModel:(MNThreadNullStateCTAViewModel *)arg1 ;
@end
