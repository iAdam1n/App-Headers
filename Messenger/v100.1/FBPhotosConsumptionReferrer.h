/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBPhotosConsumptionReferrer : FBValueObject <NSCopying> {

	NSString* _id;
	NSString* _name;
	NSString* _contextID;
	NSString* _viewerID;
	NSString* _ownerID;
	NSString* _contentID;
	NSString* _viewingSurface;
	NSString* _photoViewingSessionID;

}

@property (nonatomic,copy,readonly) NSString * id;                                 //@synthesize id=_id - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * contextID;                          //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewerID;                           //@synthesize viewerID=_viewerID - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownerID;                            //@synthesize ownerID=_ownerID - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentID;                          //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewingSurface;                     //@synthesize viewingSurface=_viewingSurface - In the implementation block
@property (nonatomic,copy,readonly) NSString * photoViewingSessionID;              //@synthesize photoViewingSessionID=_photoViewingSessionID - In the implementation block
-(id)initWithId:(id)arg1 name:(id)arg2 contextID:(id)arg3 viewerID:(id)arg4 ownerID:(id)arg5 contentID:(id)arg6 viewingSurface:(id)arg7 photoViewingSessionID:(id)arg8 ;
-(NSString *)viewerID;
-(NSString *)viewingSurface;
-(NSString *)photoViewingSessionID;
-(NSString *)name;
-(NSString *)contextID;
-(NSString *)contentID;
-(NSString *)id;
-(NSString *)ownerID;
@end
