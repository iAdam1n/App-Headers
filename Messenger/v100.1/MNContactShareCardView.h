/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, MNContactShareAttachmentViewModel, UITableView;

@interface MNContactShareCardView : UIView {

	UIView* _whiteView;
	MNContactShareAttachmentViewModel* _contactAttachmentViewModel;
	UITableView* _tableView;

}

@property (nonatomic,copy,readonly) MNContactShareAttachmentViewModel * contactAttachmentViewModel;              //@synthesize contactAttachmentViewModel=_contactAttachmentViewModel - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                                          //@synthesize tableView=_tableView - In the implementation block
-(MNContactShareAttachmentViewModel *)contactAttachmentViewModel;
-(id)initWithFrame:(CGRect)arg1 contactShareAttachmentViewModel:(id)arg2 ;
-(void)layoutSubviews;
-(UITableView *)tableView;
@end
