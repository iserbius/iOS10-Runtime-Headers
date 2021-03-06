/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAWDLogEventObserver : NSObject <HMDLogEventObserver> {
    unsigned long long  _dataSyncState;
    NSMutableDictionary * _errorToCountMap;
    unsigned int  _fetchCount;
    bool  _hasDecryptionFailed;
    bool  _lastDecryptionFailed;
    unsigned int  _pushCount;
    NSMutableDictionary * _reasonToCountMap;
    unsigned int  _uploadCount;
    unsigned int  _uploadErrorCount;
    bool  _uploadMaximumDelayReached;
}

@property (nonatomic) unsigned long long dataSyncState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *errorToCountMap;
@property (nonatomic) unsigned int fetchCount;
@property (nonatomic) bool hasDecryptionFailed;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool lastDecryptionFailed;
@property (nonatomic) unsigned int pushCount;
@property (nonatomic, retain) NSMutableDictionary *reasonToCountMap;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int uploadCount;
@property (nonatomic) unsigned int uploadErrorCount;
@property (nonatomic) bool uploadMaximumDelayReached;

+ (void)_submitAWDMetric:(id)arg1 type:(unsigned int)arg2;
+ (void)initialize;
+ (id)sharedAWDServerConnection;
+ (id)stringForMetricType:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)clearCloudSyncMetrics;
- (unsigned long long)dataSyncState;
- (void)dispatcher:(id)arg1 didReceiveEvent:(id)arg2;
- (id)errorToCountMap;
- (unsigned int)fetchCount;
- (id)getTop:(long long)arg1 dictionary:(id)arg2;
- (bool)hasDecryptionFailed;
- (id)init;
- (bool)lastDecryptionFailed;
- (void)processCloudEvent:(id)arg1;
- (unsigned int)pushCount;
- (id)reasonToCountMap;
- (void)setDataSyncState:(unsigned long long)arg1;
- (void)setErrorToCountMap:(id)arg1;
- (void)setFetchCount:(unsigned int)arg1;
- (void)setHasDecryptionFailed:(bool)arg1;
- (void)setLastDecryptionFailed:(bool)arg1;
- (void)setPushCount:(unsigned int)arg1;
- (void)setReasonToCountMap:(id)arg1;
- (void)setUploadCount:(unsigned int)arg1;
- (void)setUploadErrorCount:(unsigned int)arg1;
- (void)setUploadMaximumDelayReached:(bool)arg1;
- (void)submitCloudSyncMetric;
- (unsigned int)uploadCount;
- (unsigned int)uploadErrorCount;
- (bool)uploadMaximumDelayReached;

@end
