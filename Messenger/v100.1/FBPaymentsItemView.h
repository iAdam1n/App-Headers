/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPaymentsViewModelConfigurable.h>

@class FBPaymentsItemImageGridView, FBPaymentsItemTextView, FBPaymentsItemViewModel, NSString;

@interface FBPaymentsItemView : UIView <FBPaymentsViewModelConfigurable> {

	FBPaymentsItemImageGridView* _imageGridView;
	FBPaymentsItemTextView* _itemTextView;
	FBPaymentsItemViewModel* _viewModel;

}

@property (nonatomic,copy) FBPaymentsItemViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBPaymentsItemViewModel *)viewModel;
-(void)setViewModel:(FBPaymentsItemViewModel *)arg1 ;
@end
