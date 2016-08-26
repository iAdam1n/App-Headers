/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/197B1B60-1AA0-4A72-98F6-7C55CCB87C93/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlight/OAAppDetailBaseTableViewCell.h>

@class NSString, UILabel;

@interface OAAppDetailCopyrightTableViewCell : OAAppDetailBaseTableViewCell {

	NSString* _copyright;
	UILabel* _copyrightLabel;

}

@property (nonatomic,retain) NSString * copyright;                         //@synthesize copyright=_copyright - In the implementation block
@property (assign,nonatomic,__weak) UILabel * copyrightLabel;              //@synthesize copyrightLabel=_copyrightLabel - In the implementation block
-(UILabel *)copyrightLabel;
-(void)setCopyrightLabel:(UILabel *)arg1 ;
-(void)awakeFromNib;
-(NSString *)copyright;
-(void)setCopyright:(NSString *)arg1 ;
@end
