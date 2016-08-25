/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol DCSProtocol <NSObject>
@property (assign,nonatomic) BOOL isStaging; 
@property (nonatomic,copy) NSString * configurationVersion; 
@property (nonatomic,readonly) float deviceRolloutThreshold; 
@required
-(BOOL)isStaging;
-(void)setIsStaging:(BOOL)arg1;
-(BOOL)appKilled;
-(id)overriddenProperties;
-(id)rawProperties;
-(BOOL)validConfiguration;
-(void)addLocalOverride:(id)arg1 forKey:(id)arg2;
-(float)deviceRolloutThreshold;
-(id)properties;
-(void)forceReload;
-(NSString *)configurationVersion;
-(void)setConfigurationVersion:(id)arg1;

@end

