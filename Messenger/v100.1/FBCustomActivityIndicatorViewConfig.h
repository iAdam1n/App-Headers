/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBUIConfig.h>

@class UIColor, NSString;

@interface FBCustomActivityIndicatorViewConfig : FBValueObject <FBUIConfig> {

	BOOL _hidesWhenStopped;
	BOOL _animates;
	unsigned long long _style;
	UIColor* _tintColor;
	UIColor* _backgroundColor;

}

@property (nonatomic,readonly) unsigned long long style;                    //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) BOOL hidesWhenStopped;                       //@synthesize hidesWhenStopped=_hidesWhenStopped - In the implementation block
@property (nonatomic,readonly) BOOL animates;                               //@synthesize animates=_animates - In the implementation block
@property (nonatomic,copy,readonly) UIColor * tintColor;                    //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithStyle:(unsigned long long)arg1 hidesWhenStopped:(BOOL)arg2 animates:(BOOL)arg3 tintColor:(id)arg4 backgroundColor:(id)arg5 ;
+(Class)viewClass;
-(id)_initWithStyle:(unsigned long long)arg1 hidesWhenStopped:(BOOL)arg2 animates:(BOOL)arg3 tintColor:(id)arg4 backgroundColor:(id)arg5 ;
-(UIColor *)backgroundColor;
-(unsigned long long)style;
-(UIColor *)tintColor;
-(BOOL)hidesWhenStopped;
-(BOOL)animates;
@end
