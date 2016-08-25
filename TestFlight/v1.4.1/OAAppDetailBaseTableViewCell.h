/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/197B1B60-1AA0-4A72-98F6-7C55CCB87C93/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <TestFlight/OABaseTableViewCell.h>

@protocol OAAppDetailTableViewCellDelegate;
@interface OAAppDetailBaseTableViewCell : OABaseTableViewCell {

	id<OAAppDetailTableViewCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<OAAppDetailTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<OAAppDetailTableViewCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<OAAppDetailTableViewCellDelegate>)delegate;
-(void)awakeFromNib;
@end

