/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <Skype/SKPImageBridgeOperation.h>

@class NSURLResponse, NSData, NSError, SKPMediaDocument, NSString;

@interface SKPMediaDocumentImageLoadOperation : NSOperation <SKPImageBridgeOperation> {

	BOOL _executing;
	BOOL _finished;
	BOOL _shouldIgnoreKVO;
	NSURLResponse* _response;
	NSData* _data;
	NSError* _error;
	SKPMediaDocument* _mediaDocument;
	long long _objectId;
	NSString* _profileName;
	NSString* _imageKeyPathToSubscribe;
	NSString* _mediaStatusKeyPathToSubscribe;

}

@property (nonatomic,retain) NSURLResponse * response;                              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSData * data;                                         //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) SKPMediaDocument * mediaDocument;                      //@synthesize mediaDocument=_mediaDocument - In the implementation block
@property (assign,nonatomic) long long objectId;                                    //@synthesize objectId=_objectId - In the implementation block
@property (nonatomic,retain) NSString * profileName;                                //@synthesize profileName=_profileName - In the implementation block
@property (nonatomic,retain) NSString * imageKeyPathToSubscribe;                    //@synthesize imageKeyPathToSubscribe=_imageKeyPathToSubscribe - In the implementation block
@property (nonatomic,retain) NSString * mediaStatusKeyPathToSubscribe;              //@synthesize mediaStatusKeyPathToSubscribe=_mediaStatusKeyPathToSubscribe - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreKVO;                                  //@synthesize shouldIgnoreKVO=_shouldIgnoreKVO - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SKPMediaDocument *)mediaDocument;
-(void)setMediaDocument:(SKPMediaDocument *)arg1 ;
-(void)stopObservingMediaDocument;
-(BOOL)hasValidInput;
-(void)startObservingMediaDocument;
-(NSString *)imageKeyPathToSubscribe;
-(id)imageKeyPathToSubscribeOnMediaDocument;
-(void)setImageKeyPathToSubscribe:(NSString *)arg1 ;
-(id)mediaStatusKeyPathToSubscribeOnMediaDocument;
-(void)setMediaStatusKeyPathToSubscribe:(NSString *)arg1 ;
-(NSString *)mediaStatusKeyPathToSubscribe;
-(BOOL)shouldIgnoreKVO;
-(id)imageForObservingKey;
-(unsigned long long)mediaStatusForObservingKey;
-(void)setShouldIgnoreKVO:(BOOL)arg1 ;
-(id)initWithMediaDocumentObjectId:(long long)arg1 ;
-(void)workaroundCheck:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(NSURLResponse *)response;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finish;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(void)setProfileName:(NSString *)arg1 ;
-(NSString *)profileName;
-(BOOL)isConcurrent;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(long long)objectId;
-(void)setObjectId:(long long)arg1 ;
@end
