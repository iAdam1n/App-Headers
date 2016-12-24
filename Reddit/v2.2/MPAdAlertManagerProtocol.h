/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MPAdConfiguration, NSString, CLLocation, UIView;


@protocol MPAdAlertManagerProtocol <NSObject>
@property (nonatomic,retain) MPAdConfiguration * adConfiguration; 
@property (nonatomic,copy) NSString * adUnitId; 
@property (nonatomic,copy) CLLocation * location; 
@property (assign,nonatomic,__weak) UIView * targetAdView; 
@property (assign,nonatomic,__weak) id delegate; 
@required
-(UIView *)targetAdView;
-(MPAdConfiguration *)adConfiguration;
-(NSString *)adUnitId;
-(void)endMonitoringAlerts;
-(void)beginMonitoringAlerts;
-(void)processAdAlertOnce;
-(void)setAdConfiguration:(id)arg1;
-(void)setAdUnitId:(id)arg1;
-(void)setTargetAdView:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id)delegate;
-(CLLocation *)location;
-(void)setLocation:(id)arg1;

@end
