/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNTableViewCell.h>

@class UILabel;

@interface MNBlockedUserTableViewCell : MNTableViewCell {

	UILabel* _blockTypeLabel;
	UILabel* _blockDateLabel;

}

@property (nonatomic,readonly) UILabel * blockTypeLabel;              //@synthesize blockTypeLabel=_blockTypeLabel - In the implementation block
@property (nonatomic,readonly) UILabel * blockDateLabel;              //@synthesize blockDateLabel=_blockDateLabel - In the implementation block
-(id)initWithCellStyle:(id)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)blockTypeLabel;
-(UILabel *)blockDateLabel;
-(void)layoutSubviews;
@end
