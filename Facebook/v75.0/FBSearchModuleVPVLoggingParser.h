/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSearchVPVLoggingParserProtocol.h>

@class NSMutableDictionary, NSString;

@interface FBSearchModuleVPVLoggingParser : NSObject <FBSearchVPVLoggingParserProtocol> {

	NSMutableDictionary* _moduleFirstIndexPaths;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*function pointer*/void*)identifierFactory;
+(id)nodeIdentifierToLogForModel:(id)arg1 ;
+(id)_storyIDFromNativeTemplateBundle:(id)arg1 ;
+(id)_nodeIdentifierForCombinedResultsEdge:(id)arg1 atIndex:(long long)arg2 ;
-(id)extrasToLogForModel:(id)arg1 index:(long long)arg2 context:(id)arg3 ;
-(id)init;
@end
