/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:15 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphStoreObjectFactory.h>

@class NSString;

@interface FBMemModelObjectFactory : NSObject <FBGraphStoreObjectFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocFromTypeId:(unsigned)arg1 ;
+(void)setFactory:(id)arg1 typeHelper:(unique_ptr<const facebook::mobile::graphstore::parser::TypeHelper, std::__1::default_delete<const facebook::mobile::graphstore::parser::TypeHelper> >*)arg2 ;
-(const TypeHelper*)typeHelper;
-(id)newFromRecord:(const shared_ptr<const facebook::mobile::graphstore::Record>Ref)arg1 source:(const shared_ptr<const facebook::mobile::graphstore::NodeSource>Ref)arg2 ;
@end

