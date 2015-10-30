/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 2:43:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/46284644-CFA2-4927-9DCF-D060DC60B9C7/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <TestFlight/OAAppDetailBaseTableViewCell.h>

@class OASAppContext, UILabel;

@interface OAAppDetailInformationTableViewCell : OAAppDetailBaseTableViewCell {

	double _cellHeight;
	OASAppContext* _appContext;
	UILabel* _titleLabel;
	UILabel* _developerLabelLabel;
	UILabel* _releaseDateLabelLabel;
	UILabel* _versionLabelLabel;
	UILabel* _sizeLabelLabel;
	UILabel* _expiresInLabelLabel;
	UILabel* _compatibilityLabelLabel;
	UILabel* _developerLabel;
	UILabel* _releaseDateLabel;
	UILabel* _versionLabel;
	UILabel* _sizeLabel;
	UILabel* _expiresInLabel;
	UILabel* _compatibilityLabel;

}

@property (assign,nonatomic) double cellHeight;                              //@synthesize cellHeight=_cellHeight - In the implementation block
@property (nonatomic,retain) OASAppContext * appContext;                     //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * developerLabelLabel;                  //@synthesize developerLabelLabel=_developerLabelLabel - In the implementation block
@property (nonatomic,retain) UILabel * releaseDateLabelLabel;                //@synthesize releaseDateLabelLabel=_releaseDateLabelLabel - In the implementation block
@property (nonatomic,retain) UILabel * versionLabelLabel;                    //@synthesize versionLabelLabel=_versionLabelLabel - In the implementation block
@property (nonatomic,retain) UILabel * sizeLabelLabel;                       //@synthesize sizeLabelLabel=_sizeLabelLabel - In the implementation block
@property (nonatomic,retain) UILabel * expiresInLabelLabel;                  //@synthesize expiresInLabelLabel=_expiresInLabelLabel - In the implementation block
@property (nonatomic,retain) UILabel * compatibilityLabelLabel;              //@synthesize compatibilityLabelLabel=_compatibilityLabelLabel - In the implementation block
@property (nonatomic,retain) UILabel * developerLabel;                       //@synthesize developerLabel=_developerLabel - In the implementation block
@property (nonatomic,retain) UILabel * releaseDateLabel;                     //@synthesize releaseDateLabel=_releaseDateLabel - In the implementation block
@property (nonatomic,retain) UILabel * versionLabel;                         //@synthesize versionLabel=_versionLabel - In the implementation block
@property (nonatomic,retain) UILabel * sizeLabel;                            //@synthesize sizeLabel=_sizeLabel - In the implementation block
@property (nonatomic,retain) UILabel * expiresInLabel;                       //@synthesize expiresInLabel=_expiresInLabel - In the implementation block
@property (nonatomic,retain) UILabel * compatibilityLabel;                   //@synthesize compatibilityLabel=_compatibilityLabel - In the implementation block
-(UILabel *)versionLabel;
-(void)setVersionLabel:(UILabel *)arg1 ;
-(void)setDeveloperLabelLabel:(UILabel *)arg1 ;
-(void)setReleaseDateLabelLabel:(UILabel *)arg1 ;
-(void)setVersionLabelLabel:(UILabel *)arg1 ;
-(void)setSizeLabelLabel:(UILabel *)arg1 ;
-(void)setExpiresInLabelLabel:(UILabel *)arg1 ;
-(void)setCompatibilityLabelLabel:(UILabel *)arg1 ;
-(UILabel *)developerLabelLabel;
-(void)setupLabelLabel:(id)arg1 ;
-(UILabel *)releaseDateLabelLabel;
-(UILabel *)versionLabelLabel;
-(UILabel *)sizeLabelLabel;
-(UILabel *)expiresInLabelLabel;
-(UILabel *)compatibilityLabelLabel;
-(void)setReleaseDateLabel:(UILabel *)arg1 ;
-(void)setSizeLabel:(UILabel *)arg1 ;
-(void)setExpiresInLabel:(UILabel *)arg1 ;
-(void)setCompatibilityLabel:(UILabel *)arg1 ;
-(void)setupDataLabel:(id)arg1 ;
-(UILabel *)releaseDateLabel;
-(UILabel *)sizeLabel;
-(UILabel *)expiresInLabel;
-(UILabel *)compatibilityLabel;
-(void)setCellHeight:(double)arg1 ;
-(double)layoutRowAtStartingHeight:(double)arg1 withLabelLabel:(id)arg2 dataLabel:(id)arg3 ;
-(double)heightForLabel:(id)arg1 constrainedToWidth:(double)arg2 ;
-(double)cellHeight;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)developerLabel;
-(void)setDeveloperLabel:(UILabel *)arg1 ;
-(void)setAppContext:(OASAppContext *)arg1 ;
-(OASAppContext *)appContext;
@end
