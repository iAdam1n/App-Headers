/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:11 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface _FBMultipartFormGenerator : NSObject {

	NSString* _multipartFormStringBoundary;

}
+(id)generateMultipartFormStringBoundary;
-(id)_createPOSTBodyWithParameters:(id)arg1 gzipNSData:(BOOL)arg2 boundary:(id)arg3 ;
-(id)initWithMultipartFormStringBoundary:(id)arg1 ;
-(id)contentTypeHeaderFieldValue;
-(id)createDataBodyWithParameters:(id)arg1 gzipNSData:(BOOL)arg2 ;
-(id)init;
@end

