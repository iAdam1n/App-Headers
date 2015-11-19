/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:21 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, ECLabelSubBody;

@interface SettingsTableHeaderView : UIView {

	BOOL _showDetailedVersion;
	UIImageView* _theLogoImageView;
	ECLabelSubBody* _theCopyrightLabel;
	ECLabelSubBody* _theVersionLabel;

}

@property (nonatomic,retain) UIImageView * theLogoImageView;                  //@synthesize theLogoImageView=_theLogoImageView - In the implementation block
@property (nonatomic,retain) ECLabelSubBody * theCopyrightLabel;              //@synthesize theCopyrightLabel=_theCopyrightLabel - In the implementation block
@property (nonatomic,retain) ECLabelSubBody * theVersionLabel;                //@synthesize theVersionLabel=_theVersionLabel - In the implementation block
@property (assign,nonatomic) BOOL showDetailedVersion;                        //@synthesize showDetailedVersion=_showDetailedVersion - In the implementation block
+(id)cellFromNib;
-(UIImageView *)theLogoImageView;
-(ECLabelSubBody *)theCopyrightLabel;
-(ECLabelSubBody *)theVersionLabel;
-(BOOL)showDetailedVersion;
-(void)setShowDetailedVersion:(BOOL)arg1 ;
-(void)toggleVersionDetail:(id)arg1 ;
-(void)setTheLogoImageView:(UIImageView *)arg1 ;
-(void)setTheCopyrightLabel:(ECLabelSubBody *)arg1 ;
-(void)setTheVersionLabel:(ECLabelSubBody *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setupView;
@end

