/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FIGCoverImageChanger.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FBGroupFeedCoverImageChangerDelegate;
@class NSString, FBUserSession;

@interface FBGroupFeedCoverImageChanger : NSObject <FIGCoverImageChanger, NSCopying> {

	NSString* _groupGraphQLID;
	/*^block*/id _didFailToChangeCoverImageBlock;
	/*^block*/id _didChangeCoverImageBlock;
	id<FBGroupFeedCoverImageChangerDelegate> _delegate;
	FBUserSession* _session;

}

@property (assign,nonatomic,__weak) id<FBGroupFeedCoverImageChangerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * groupGraphQLID;                                               //@synthesize groupGraphQLID=_groupGraphQLID - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                               //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_notifyDelegateDidFailToChangeCoverImageWithErrorType:(int)arg1 ;
-(void)_notifyDelegateWillChangeCoverImage;
-(void)_notifyDelegateDidChangeCoverImage;
-(void)didSelectNewCoverImageWithExistingPhoto:(id)arg1 didChangeCoverImageBlock:(/*^block*/id)arg2 didFailToChangeCoverImageBlock:(/*^block*/id)arg3 ;
-(void)didSelectNewCoverImage:(id)arg1 didChangeCoverImageBlock:(/*^block*/id)arg2 didFailToChangeCoverImageBlock:(/*^block*/id)arg3 ;
-(void)_updateCoverImageWithGraphQLID:(id)arg1 ;
-(NSString *)groupGraphQLID;
-(void)setGroupGraphQLID:(NSString *)arg1 ;
-(void)setDelegate:(id<FBGroupFeedCoverImageChangerDelegate>)arg1 ;
-(id<FBGroupFeedCoverImageChangerDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

