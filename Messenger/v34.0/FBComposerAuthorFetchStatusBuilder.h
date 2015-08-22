/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface FBComposerAuthorFetchStatusBuilder : NSObject {

	BOOL _hasFetchedGraphQLID;
	BOOL _hasFetchedAuthorType;
	BOOL _hasFetchedName;
	BOOL _hasFetchedFirstName;
	BOOL _hasFetchedIsMinorValue;
	BOOL _hasFetchedProfilePictureURL;
	BOOL _hasFetchedLargeProfilePictureURL;
	BOOL _hasFetchedPageCanPostOGActions;
	BOOL _hasFetchedIsViewerAllowedToPostAsAuthorEntity;
	BOOL _hasFetchedIsWorkUser;
	BOOL _hasFetchedUrlString;
	BOOL _hasFetchedDefaultAlbumType;

}
+(id)composerAuthorFetchStatus;
+(id)composerAuthorFetchStatusFromExistingComposerAuthorFetchStatus:(id)arg1 ;
-(id)withHasFetchedName:(BOOL)arg1 ;
-(id)withHasFetchedGraphQLID:(BOOL)arg1 ;
-(id)withHasFetchedAuthorType:(BOOL)arg1 ;
-(id)withHasFetchedFirstName:(BOOL)arg1 ;
-(id)withHasFetchedIsMinorValue:(BOOL)arg1 ;
-(id)withHasFetchedProfilePictureURL:(BOOL)arg1 ;
-(id)withHasFetchedLargeProfilePictureURL:(BOOL)arg1 ;
-(id)withHasFetchedPageCanPostOGActions:(BOOL)arg1 ;
-(id)withHasFetchedIsViewerAllowedToPostAsAuthorEntity:(BOOL)arg1 ;
-(id)withHasFetchedIsWorkUser:(BOOL)arg1 ;
-(id)withHasFetchedUrlString:(BOOL)arg1 ;
-(id)withHasFetchedDefaultAlbumType:(BOOL)arg1 ;
-(id)build;
@end
