/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MWSTrackMessage : NSObject
+(void)defineAllTemplatesAndActions;
+(id)getStringIdentifierForActionTypeWithMessageType:(int)arg1 ;
+(id)makeParamNameIdentifiers;
+(id)makeParamTypeIdentifiersWithData:(id)arg1 ;
+(unsigned long long)getIntegerIdentifierForActionTypeWithMessageType:(int)arg1 ;
+(void)defineMessagesForType:(int)arg1 Names:(id)arg2 ;
+(unsigned long long)getGenericTemplateIntegerIdentifier;
+(id)makeParamNameIdentifiersForType:(int)arg1 ;
+(id)makeParamTypeIdentifiersWithData:(id)arg1 forType:(int)arg2 ;
+(id)defineValidatorsWithType:(int)arg1 Identifiers:(id)arg2 ;
+(id)buildParametersWithID:(unsigned long long)arg1 Type:(int)arg2 ;
+(void)defineResponsesWithType:(int)arg1 Data:(id)arg2 ;
+(BOOL)respondToID:(unsigned long long)arg1 Data:(id)arg2 Type:(int)arg3 ;
+(void)setDelegate:(id)arg1 ;
@end
