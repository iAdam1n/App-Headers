/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBMOmnistoreCollectionManagerDelegate;
@class FBOmnistore, NSString, FBOmnistoreCollection;

@interface FBMOmnistoreCollectionManager : NSObject {

	FBOmnistore* _omnistore;
	NSString* _collectionName;
	FBOmnistoreCollection* _collection;
	id<FBMOmnistoreCollectionManagerDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * collectionName;                                       //@synthesize collectionName=_collectionName - In the implementation block
@property (nonatomic,readonly) FBOmnistoreCollection * collection;                                   //@synthesize collection=_collection - In the implementation block
@property (assign,nonatomic,__weak) id<FBMOmnistoreCollectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_handleDeltaCallback:(id)arg1 ;
-(id)initWithOmnistore:(id)arg1 collectionName:(id)arg2 ;
-(id)getObjectWithPrimaryKey:(id)arg1 ;
-(FBOmnistoreCollection *)collection;
-(void)setDelegate:(id<FBMOmnistoreCollectionManagerDelegate>)arg1 ;
-(id<FBMOmnistoreCollectionManagerDelegate>)delegate;
-(void)start;
-(NSString *)collectionName;
@end

