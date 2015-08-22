/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBFIGConfigBuilder.h>

@class UIColor, NSString;

@interface FBCustomActivityIndicatorViewConfigBuilder : NSObject <FBFIGConfigBuilder> {

	BOOL _hidesWhenStopped;
	BOOL _animates;
	unsigned long long _style;
	UIColor* _tintColor;
	UIColor* _backgroundColor;

}

@property (assign,nonatomic) unsigned long long style;              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL hidesWhenStopped;                 //@synthesize hidesWhenStopped=_hidesWhenStopped - In the implementation block
@property (assign,nonatomic) BOOL animates;                         //@synthesize animates=_animates - In the implementation block
@property (nonatomic,copy) UIColor * tintColor;                     //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderFromConfig:(id)arg1 ;
+(id)builderIgnoringClassLevelOverrides;
+(id)builderForInstance:(id)arg1 ;
+(id)builder;
-(id)build;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)_init;
-(unsigned long long)style;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setHidesWhenStopped:(BOOL)arg1 ;
-(BOOL)hidesWhenStopped;
-(void)setAnimates:(BOOL)arg1 ;
-(BOOL)animates;
@end
