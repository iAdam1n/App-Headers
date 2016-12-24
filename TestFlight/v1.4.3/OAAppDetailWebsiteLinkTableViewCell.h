/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:48:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/C8BBB3B7-A738-4D43-8A19-90B2CFB12AE1/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlight/OAAppDetailBaseTableViewCell.h>

@class NSString, NSURL, UILabel;

@interface OAAppDetailWebsiteLinkTableViewCell : OAAppDetailBaseTableViewCell {

	NSString* _title;
	NSURL* _URL;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic,__weak) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
-(void)cellWasTapped:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)awakeFromNib;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end
