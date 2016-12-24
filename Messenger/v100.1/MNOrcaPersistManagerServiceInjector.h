/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@class FBProviderMapData, OrcaPersistManager, FBMAppProperties, NSString;

@interface MNOrcaPersistManagerServiceInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	OrcaPersistManager* _persistManager;
	FBMAppProperties* _appProperties;

}

@property (nonatomic,readonly) OrcaPersistManager * persistManager;              //@synthesize persistManager=_persistManager - In the implementation block
@property (nonatomic,readonly) FBMAppProperties * appProperties;                 //@synthesize appProperties=_appProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(OrcaPersistManager *)persistManager;
-(FBMAppProperties *)appProperties;
@end
