/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBQuicksilverFunnelLoggingConfiguration.h>

@class NSString;

@interface MNGameFunnelLoggingConfiguration : NSObject <FBQuicksilverFunnelLoggingConfiguration> {

	NSString* _funnelName;
	NSString* _source;
	NSString* _sourceID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)funnelName;
-(id)initWithFunnelName:(id)arg1 source:(id)arg2 sourceID:(id)arg3 ;
-(id)source;
-(id)sourceID;
@end
