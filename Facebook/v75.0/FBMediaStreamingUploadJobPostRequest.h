/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBURLRequest.h>

@interface FBMediaStreamingUploadJobPostRequest : FBURLRequest
-(void)_setHeadersWithTotalFileSize:(unsigned long long)arg1 offset:(unsigned long long)arg2 dataCenter:(id)arg3 entityType:(id)arg4 entityName:(id)arg5 mediaHash:(id)arg6 extraParams:(id)arg7 extraStringHeaders:(id)arg8 ;
-(id)initWithURL:(id)arg1 uploadData:(id)arg2 offset:(unsigned long long)arg3 dataCenter:(id)arg4 entityType:(id)arg5 entityName:(id)arg6 mediaHash:(id)arg7 extraParams:(id)arg8 extraStringHeaders:(id)arg9 ;
-(id)initWithURL:(id)arg1 uploadFile:(id)arg2 offset:(unsigned long long)arg3 dataCenter:(id)arg4 entityType:(id)arg5 entityName:(id)arg6 mediaHash:(id)arg7 extraParams:(id)arg8 extraStringHeaders:(id)arg9 ;
@end
