/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor, SLKDependencies;

@interface SLKSidebarThemeHelper : NSObject {

	UIColor* _columnBackgroundColor;
	UIColor* _menuBackgroundColor;
	UIColor* _activeItemColor;
	UIColor* _hoverItemColor;
	UIColor* _textColor;
	UIColor* _activePresence;
	UIColor* _badgeColor;
	UIColor* _activeTextColor;
	long long _statusBarStyle;
	long long _themeChanged;
	SLKDependencies* _dependencies;

}

@property (nonatomic,retain) UIColor * columnBackgroundColor;                    //@synthesize columnBackgroundColor=_columnBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * menuBackgroundColor;                      //@synthesize menuBackgroundColor=_menuBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * activeItemColor;                          //@synthesize activeItemColor=_activeItemColor - In the implementation block
@property (nonatomic,retain) UIColor * hoverItemColor;                           //@synthesize hoverItemColor=_hoverItemColor - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * activePresence;                           //@synthesize activePresence=_activePresence - In the implementation block
@property (nonatomic,retain) UIColor * badgeColor;                               //@synthesize badgeColor=_badgeColor - In the implementation block
@property (nonatomic,retain) UIColor * activeTextColor;                          //@synthesize activeTextColor=_activeTextColor - In the implementation block
@property (assign,nonatomic) long long statusBarStyle;                           //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (assign,nonatomic) long long themeChanged;                             //@synthesize themeChanged=_themeChanged - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies;              //@synthesize dependencies=_dependencies - In the implementation block
-(id)initWithDependencies:(id)arg1 ;
-(UIColor *)columnBackgroundColor;
-(UIColor *)hoverItemColor;
-(UIColor *)activePresence;
-(void)setColumnBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)activeItemColor;
-(UIColor *)activeTextColor;
-(void)setActiveTextColor:(UIColor *)arg1 ;
-(void)refreshTheme;
-(void)setMenuBackgroundColor:(UIColor *)arg1 ;
-(void)setActiveItemColor:(UIColor *)arg1 ;
-(void)setHoverItemColor:(UIColor *)arg1 ;
-(void)setActivePresence:(UIColor *)arg1 ;
-(UIColor *)menuBackgroundColor;
-(long long)themeChanged;
-(void)setThemeChanged:(long long)arg1 ;
-(SLKDependencies *)dependencies;
-(void)dealloc;
-(long long)statusBarStyle;
-(void)setStatusBarStyle:(long long)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(UIColor *)badgeColor;
-(void)setBadgeColor:(UIColor *)arg1 ;
-(void)setDependencies:(SLKDependencies *)arg1 ;
@end
