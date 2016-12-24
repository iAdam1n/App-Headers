/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:48:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/C8BBB3B7-A738-4D43-8A19-90B2CFB12AE1/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlight/OAAppDetailBaseTableViewCell.h>

@class OASAppContext, UILabel;

@interface OAAppDetailVagueInviteBuildTableViewCell : OAAppDetailBaseTableViewCell {

	OASAppContext* _appContext;
	UILabel* _titleLabel;
	UILabel* _appleIDLabel;

}

@property (nonatomic,retain) OASAppContext * appContext;              //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * appleIDLabel;                  //@synthesize appleIDLabel=_appleIDLabel - In the implementation block
-(id)createAndSetUpLabel;
-(UILabel *)appleIDLabel;
-(void)setAppleIDLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(OASAppContext *)appContext;
-(void)setAppContext:(OASAppContext *)arg1 ;
@end
